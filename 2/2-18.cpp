//
// Created by cheny on 2018/9/17.
//
#include <iostream>

int main()
{
    int a = {123};
    int *p1 = &a;
    int *p2 = nullptr;

    std::cout << *p1 << " " << a <<std::endl;
    *p1 = 321;  //修改指针所指对象的值
    std::cout << *p1 << " " << a << std::endl;

    p1 = p2;    //修改指针的值
    std::cout << p1 << std::endl;

    return 0;
}

