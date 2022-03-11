#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;
using std::string;

int main(){
    string a = "Test";
    Sales_data s1;
    Sales_data s2(10.0);
    Sales_data s3(a);
    Sales_data s4(a, 10, 10.3);
}