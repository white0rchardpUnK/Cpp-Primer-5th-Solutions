//
// Created by cheny on 2018/9/16.
//
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, tmp;

    while (std::cin >> tmp){
        book += tmp;
    }

    std::cout << book << std::endl;

    return 0;
}

