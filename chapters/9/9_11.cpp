#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main() {
    vector<int>vx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto vxb = vx.cbegin(), vxe = vx.cend();
    auto vxit = (vxe - 4);

    //默认构造函数初始化
    vector<int> v1;     //v1为空，不含任何元素

    //v2初始化为vx的拷贝
    vector<int> v2(vx); //元素数量、类型、值均与vx相同

    //v3初始化为初始化列表中元素的拷贝
    vector<int> v3{4, 5, 6, 7, 8};  //含5个int型元素，值分别为列表中的值

    //v4初始化为迭代器vxb和vxit（不含）指定范围中的元素的拷贝
    vector<int> v4(vxb, vxit);  //含6个元素，值为vx中迭代器vxb所指的元素值为1处至vxit所指的元素值为7处之前的范围内的值

    //仅顺序容器（不包括array）的构造函数才能接受大小参数
    //v5包含3个元素，这些元素进行了值初始化
    vector<int> v5(3);  //含3个int型元素，值均被默认初始化为0

    //v6包含6个初始化为值=23的元素
    vector<int> v6(6, 23);  //含6个int型元素，值均被初始化为23
}