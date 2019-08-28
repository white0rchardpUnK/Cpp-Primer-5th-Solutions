#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book_now, book_rest;

    if (std::cin >> book_now){
        int current_isbn = 1;   //保存当前正在处理的isbn出现的次数
        while (std::cin >> book_rest){  //读取剩余的销售记录
            if (book_now.isbn() == book_rest.isbn()){   //若isbn值相同
                ++current_isbn;     //将isbn计数器值+1
            } else{     //若不相同，即刻打印前一个isbn的个数
                std::cout << book_now.isbn() << "有"
                          << current_isbn << "条销售记录" << std::endl;
                book_now = book_rest;   //记住新的isbn值
                current_isbn = 1;   //重置计数器
            }
        }
        //打印最后一条记录中isbn的销售次数
        std::cout << book_now.isbn() << "有"
                  << current_isbn << "条销售记录" << std::endl;
    }

    return 0;
}

