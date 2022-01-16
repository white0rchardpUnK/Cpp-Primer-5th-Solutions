#include <iostream>
#include <initializer_list>

using std::cin; using std::cout; using std::endl;
using std::initializer_list;

int ilsum(initializer_list<int> il){
    int sum = 0;
    for (auto b = il.begin(), e = il.end(); b != e; ++b){
        cout << *b << " ";
    }
    cout << endl;
    for (const auto &e : il){
        sum += e;
    }
    return sum;
}

int main(int argc, char *argv[]){
    cout << ilsum({1, 3, 5, 7, 9, 2, 4, 6, 8, 5, 0}) << endl;
}