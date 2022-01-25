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

Sales_data add(const Sales_data &asd, const Sales_data &bsd){
    Sales_data tmpsum = asd;
    tmpsum.combine(bsd);
    return tmpsum;
}

std::istream &read(std::istream &is, Sales_data &item){
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}
#endif //UNTITLED1_SALES_DATA_H