/*
 * 使用迭代器重构
 * 划分分数段
 */
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<unsigned int> scores(11, 0);
    unsigned int grade;
    while (cin >> grade){
        if (grade <= 100){
            auto it = scores.begin();
            ++(*(it += grade/10));
        }
    }
    for (auto x : scores){
        cout << x << "\t";
    }
}