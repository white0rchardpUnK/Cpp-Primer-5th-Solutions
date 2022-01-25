#ifndef UNTITLED1_SALES_DATA_H
#define UNTITLED1_SALES_DATA_H

#include <iostream>
#include <string>


struct Sales_data {
    //存储ISBN号
    std::string bookNo;
    //存储销售数量
    unsigned long units_sold = 0;
    //存储销售收入
    long double revenue = 0.0;
    //返回isbn号
    std::string isbn() const {
        return bookNo;
    }
    //相加两个Sales_data对象
    Sales_data & combine(const Sales_data &a);
};



Sales_data& Sales_data::combine(const Sales_data &a) {
    units_sold += a.units_sold;
    revenue += a.revenue;
    return *this;
}
#endif //UNTITLED1_SALES_DATA_H