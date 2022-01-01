/*
 * 使用vector重构
 * 定义一个含有10个int的vector，将每个元素的值变为其下标值
 */
#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> a(10, 0);
    vector<int> b(10,0);
    vector<int> c;

    //使用迭代器改变vector中的元素值
    int i = 0;
    for (auto it = a.begin(); it != a.end(); ++it){
        *it = i;
        ++i;
    }
    //使用范围for循环改变vector中的元素值
    int j = 0;
    for (auto &x : b){
        x = j;
        ++j;
    }
    //使用动态增长
    for (int k = 0; k < 10; ++k){
        c.push_back(k);
    }

    //使用迭代器输出结果
    for (auto it = a.cbegin(); it != a.cend(); ++it)
        cout << *it << "\t";
    cout << endl;
    //使用范围for循环输出结果
    for (auto e : b)
        cout << e << "\t";
    cout << endl;
    //使用vector下标输出结果
    for (decltype(c.size()) z = 0; z != c.size(); ++z)
        cout << c[z] << "\t";
    cout << endl;
}