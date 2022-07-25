#include <iostream>
#include <vector>
#include <list>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::list;

int main() {
    vector<int> v{1, 2, 3, 4};
    list<int> l1{1, 2, 3, 4, 5, 6};
    auto lb = l1.cbegin(), le = l1.cend();

    //使用迭代器范围拷贝l1并初始化v1
    vector<double> v1(lb, le);

    //使用接受v为参数的构造函数拷贝v并初始化v2
    vector<int> v2(v);
}