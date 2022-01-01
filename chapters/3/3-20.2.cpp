/*
 * 读入一组整数存入一个vector对象中
 * 递减输出首尾元素和
 */
#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    int a = 0;
    vector<int> x;
    while (cin >> a){
        x.push_back(a);
    }
    for(decltype(x.size()) i = 0, j = (x.size() - 1); i < (x.size() - 1) && j >= i; ++i, --j){
        if (i != j){
            cout << x[i] + x[j] << endl;
        } else{
            cout << x[i] << endl;
        }
    }
    return 0;
}