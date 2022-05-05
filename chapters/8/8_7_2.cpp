#include <iostream>
#include <fstream>
#include <string>
#include "Sales_data.h"

using std::cin; using std::cout;
using std::endl; using std::cerr;
using std::string;

int pb(std::istream &is, std::ostream &os){
    Sales_data total;
    if (read(is, total)) {
        Sales_data trans;
        while (read(is, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(os, total) << std::endl;
                total = trans;
            }
        }
        print(os, total) << std::endl;
    } else {
        std::cerr << "No data!" << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int main(int argc, char *argv[]){
    if (argc < 3){
        cerr << "No file name? Or miss input/output filename?" << endl;
        return EXIT_FAILURE;
    }
    std::ifstream input(argv[1]);
    std::ofstream output(argv[2]);

    if (!input){
        cerr << "Fail to open: " + string(argv[1]) << endl;
        return EXIT_FAILURE;
    } else if (!output){
        cerr << "Fail to open: " + string(argv[2]) << endl;
        return EXIT_FAILURE;
    } else {
        try {
            pb(input, output);
            throw std::runtime_error("Something wrong");
        } catch (std::runtime_error err){
            cout << err.what() << endl;
            cout << "Excute normal" << endl;
            pb(input,cout);
        }
    }
    return EXIT_SUCCESS;
}