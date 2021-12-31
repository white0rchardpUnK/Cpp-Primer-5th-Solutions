/*
 * 重构练习1.21
 * 使用Sales_data类重构练习
 * 读取两个ISBN相同的Sales_data对象，输出其和
 */

#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data data_a, data_b;
    //记录单价
    long double single_price = 0.0;
    //读入第一条记录
    std::cin >> data_a.bookNo >> data_a.units_sold >> single_price;
    //计算总销售额
    data_a.revenue = single_price * data_a.units_sold;
    //读取第二条记录
    std::cin >> data_b.bookNo >> data_b.units_sold >>single_price;
    //计算总销售额
    data_b.revenue = single_price * data_b.units_sold;

    if (data_a.bookNo == data_b.bookNo){
        unsigned long total_sold = data_a.units_sold + data_b.units_sold;
        long double total_revenue = data_a.revenue + data_b.revenue;

        std::cout << data_a.bookNo << " " << total_sold << " "
                        << total_revenue/total_sold << " " << std::endl;

        return 0;
    } else{
        std::cerr << "ISBN号不同，错误" << std::endl;
        return -1;
    }
}
