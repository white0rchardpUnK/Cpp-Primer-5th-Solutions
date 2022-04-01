#include <iostream>
#include <fstream>
#include <string>
#include "Sales_data.h"

using std::cin; using std::cout;
using std::endl; using std::cerr;
using std::string;

int main(int argc, char *argv[]){
    if (argc < 2){
        cerr << "No filename?" << endl;
        return EXIT_FAILURE;
    }
    std::ifstream input(argv[1]);
    
    if (!input){
        cerr << "Fail to open: " + string(argv[1]) << endl;
        return EXIT_FAILURE;
    }

    Sales_data total;
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(std::cout, total) << std::endl;
                total = trans;  
            }
        }
        print(std::cout, total) << std::endl;
    } else {
        std::cerr << "No data!" << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}