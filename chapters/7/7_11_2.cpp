#include <iostream>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;
using std::cerr;

int main(){
    Sales_data s1;
    Sales_data s2("9787121155352");
    Sales_data s3("9787121155352", 100, 129.99);
    Sales_data s4(cin);

    return EXIT_SUCCESS;
}