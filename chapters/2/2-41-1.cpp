

/* 
 * 重构练习1.20
 * 使用Sales_data类重构练习
 * 读取一组书籍的销售记录，将每条记录打印到标准输出上
 */

#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data data_tmp;
    std::cout << "请输入一组数据： " << std::endl;
    if (std::cin){
        while (std::cin){
            std::cin >> data_tmp.bookNo >> data_tmp.units_sold >> data_tmp.revenue;
            std::cout << "ISBN号：  " << data_tmp.bookNo << " "
                      << "销售数量： " << data_tmp.units_sold << " "
                      << "单价： " << data_tmp.revenue << " " << std::endl;
            return 0;
        }
    } else{
        std::cout << "无数据输入" << std::endl;
        return -1;
    }
}
