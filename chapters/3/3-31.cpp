/*
 * 定义一个含有10个int的数组，将每个元素的值变为其下标值
 */
#include <iostream>
#include <cctype>

using std::cin; using std::cout; using std::endl;
using std::size_t;

constexpr size_t x = 10;
int a[x];
int b[x];

int main()
{
    for (auto i : a)
        cout << i << "\t";
    cout << endl;
    for (auto j : b)
        cout << j << "\t";
    cout << endl;

    //使用下标访问改变数组元素值
    for (size_t ia = 0; ia < x ; ++ia){
        a[ia] = ia;
    }

    //使用范围for循环改变数组元素值
    int k = 0;
    for (auto &ib : b){
        ib = k;
        ++k;
    }

    //输出结果
    for (auto i : a)
        cout << i << "\t";
    cout << endl;
    for (auto j : b)
        cout << j << "\t";
    cout << endl;
}