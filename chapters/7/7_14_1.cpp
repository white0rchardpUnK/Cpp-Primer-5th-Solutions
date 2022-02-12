#ifndef UNTITLED1_SALES_DATA_H
#define UNTITLED1_SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data;
std::istream &read(std::istream &is, Sales_data &item);

struct Sales_data {
    Sales_data():bookNo(" "), units_sold(0), revenue(0){};
    Sales_data(const std::string &s):bookNo(s){};
    Sales_data(const std::string &s, unsigned long n, double p):
                bookNo(s), units_sold(n),revenue(p*n){};
    Sales_data(std::istream &is) {
        read(is, *this);
    }
    std::string bookNo;
    unsigned long units_sold = 0;
    long double revenue = 0.0;

    std::string isbn() const {
        return bookNo;
    }
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