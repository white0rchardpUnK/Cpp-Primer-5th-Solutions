#include <iostream>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;
using std::cerr;

int main(){
    Sales_data sd;  //保存当前正在处理的记录
    //开始处理第一条记录，假定输入按此特定顺序
    if (cin >> sd.bookNo >> sd.units_sold >> sd.revenue){
        Sales_data stepsd;  //用于处理余下记录的步进量
        //开始循环处理剩余的所有记录，假定输入按此特定顺序
        while (cin >> stepsd.bookNo >> stepsd.units_sold >> stepsd.revenue){
            if (stepsd.bookNo == sd.bookNo){        //isbn相同，同一本书
                sd.units_sold += stepsd.units_sold; //更新销售数量
                sd.revenue += stepsd.revenue;       //更新销售收入
            } else {
                cout << sd.bookNo << " sold " << sd.units_sold << " total "
                     << sd.revenue << endl;         //输出当前正在处理的记录
                     sd.bookNo = stepsd.bookNo;
                     sd.units_sold = stepsd.units_sold;
                     sd.revenue = stepsd.revenue;       //步进状态
            }
        }
    } else {
        cerr << "No Data" << endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}