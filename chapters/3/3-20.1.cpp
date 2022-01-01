/*
 * 读入一组整数存入一个vector对象中
 * 输出每对相邻整数的和
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
    for(decltype(x.size()) i = 0; i < (x.size() - 1); ++i){
        cout << x[i] + x[i+1] << endl;
    }

    return 0;
}