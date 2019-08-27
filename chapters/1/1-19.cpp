//
// Created by cheny on 2018/9/16.
//
#include <iostream>

int main()
{
    std::cout << "请输入两个值： " << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    if (n1 > n2){
        for (; n1 > n2; --n1){
            std::cout << n1 <<std::endl;
        }
        std::cout << n2 << std::endl;
    }
    if (n1 < n2){
        for (; n2 > n1; --n2){
            std::cout << n2 << std::endl;
        }
        std::cout << n1 << std::endl;
    }
    return 0;
}

