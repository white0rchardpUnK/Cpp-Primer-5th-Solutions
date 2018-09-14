//
// Created by cheny on 2018/9/14.
//
#include <iostream>
/*
 * 使用递减运算符打印10到0之间的整数
 */
int main()
{
    int base = 10;
    while(base >= 0){
        std::cout << base << std::endl;
        --base;
    }
    return 0;
}
