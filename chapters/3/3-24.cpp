/*
 * 使用迭代器重构
 * 读入一组整数并存入一个vector对象
 * 将每对相邻整数的和输出
 */
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main()
{
    int a = 0;
    vector<int> x;
    while (cin >> a){
        x.push_back(a);
    }
    for (auto it = x.cbegin(), itend = x.cend(); it != itend && it < (itend - 1); ++it){
        cout << *it + *(it + 1) << endl;
    }
}