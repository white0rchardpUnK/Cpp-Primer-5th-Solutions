//将其修改为聚合类
struct Sales_Data{
    std::string bookNo;
    unsigned units_sold;
    double revenue;
}
//该花括号括起来的成员初始值列表将用于初始化聚合类Sales_Data对象item的成员
//item.bookNo = "978-0590353403"
//item.units_sold = 25
//item.revenue = 15.99