#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iterator>
using std::inserter;
using std::istream_iterator; using std::ostream_iterator;
#include <algorithm>
using std::sort;
#include <numeric>
using std::accumulate;
#include "Sales_item.h"

bool compareIsbn_1(const Sales_item &sd1, const Sales_item &sd2){
    return sd1.isbn() < sd2.isbn();
}

void print(ostream &os, vector<Sales_item> &vS){
    ostream_iterator<Sales_item> out_iter1(os, "\n");
    for (const auto &a : vS)
        out_iter1 = a;
    os << endl;
}

void pro_tran(istream &is, vector<Sales_item> &vS){
    istream_iterator<Sales_item> item_iter(is), eof;
    auto it = inserter(vS, vS.begin());
    Sales_item sum = *item_iter++;
    while (item_iter != eof){
        if (item_iter -> isbn() == sum.isbn()){
            sum += *item_iter++;
        } else {
            it = sum;
            sum = *item_iter++;
        }
    }
    cout << "Now the vector<Sales_item> vS has: \n";
    print(cout, vS);
}

void pro_tran(istream &is, ostream &os, vector<Sales_item> &vS1){
    istream_iterator<Sales_item> item_iter(is), eof;
    vector<Sales_item> vS_tmp(item_iter, eof);
    vS1 = vS_tmp;
    cout << "Now the record has been read to vector<Sales_item> vS1 and sort : \n";
    sort(vS1.begin(), vS1.end(), compareIsbn_1);
    print(os, vS1);
    cout << "Now using find_if_not and accumulate deal with vS1: \n";
    ostream_iterator<Sales_item> out_iter(os, "\n");
    //此时vS1已按isbn大小排好序，相同isbn的Sales_item对象在其中连续存储
    //find_if_not返回一个迭代器，指向第一个使一元谓词为false的元素
    //使用find_if_not定位isbn不同的对象位置，分区段求值
    for (auto bg = vS1.begin(), ed = bg; bg != vS1.end(); bg = ed) {
        ed = std::find_if_not(bg, vS1.end(),
                              [bg](const Sales_item &i) { return i.isbn() == bg->isbn(); });
        out_iter = std::accumulate(bg, ed, Sales_item(bg -> isbn()));
    }
}

int main() {
    vector<Sales_item> vS, vS1;
    string pt("/home/raymain/CLionProjects/CPPLv1/book_sales.txt");
    ifstream input(pt), input_1(pt);
    if (input.is_open() && input_1.is_open()){
        pro_tran(input, vS);
        pro_tran(input_1, cout, vS1);
    } else {
        cout << "Failed to open file" << endl;
        return EXIT_FAILURE;
    }
}