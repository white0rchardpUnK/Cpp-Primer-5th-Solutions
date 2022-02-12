#include <iostream>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;
using std::cerr;

int main(){
    Sales_data sd(cin);  //保存当前正在处理的记录
    //开始处理第一条记录，假定输入按此特定顺序
    if (cin){
        Sales_data stepsd(cin);  //用于处理余下记录的步进量
        //开始循环处理剩余的所有记录，假定输入按此特定顺序
        while (cin){
            if (stepsd.isbn() == sd.isbn()){//isbn相同，同一本书
                add(sd, stepsd);
            } else {
                print(cout, stepsd) << endl;
                sd = stepsd;       //步进状态
            }
        }
    } else {
        cerr << "No Data" << endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}