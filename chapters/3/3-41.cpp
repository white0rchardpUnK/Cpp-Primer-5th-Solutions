#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::cerr;
using std::begin; using std::end;
using std::vector;

int main()
{
    //用整型数组初始化一个vector对象
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};

    //使用整个数组
    vector<int> x(begin(a), end(a));

    //拷贝数组的一部分a[3] a[4] a[5]
    vector<int> y(a + 3, a + 6);

    //检查结果
    for (auto i : x)
        cout << i << "\t";
    cout << endl;

    for (auto i : y)
        cout << i << "\t";
    cout << endl;
}