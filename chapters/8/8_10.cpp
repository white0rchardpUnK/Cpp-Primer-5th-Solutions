#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using std::cin; using std::cout; using std::endl; using std::cerr;
using std::string; using std::vector;

std::istream &readPrint(std::istream &is){
    string tmp;
    auto old_state = is.rdstate();
    while (is >> tmp){
        cout << tmp << endl;
    }
    is.clear();
    is.setstate(old_state);
    is.clear(is.rdstate() & ~is.failbit & ~is.badbit & ~is.eofbit);
}

int main(){
    vector<string> v1;
    string filename;
    std::ifstream inputF(filename);
    if (inputF){
        string tmp;
        while (getline(inputF, tmp))
            v1.push_back(tmp);
    } else {
        cerr << "Fail to open: " + filename << endl;
        return EXIT_FAILURE;
    }
    for (auto b = v1.begin(), e = v1.end(); b != e; ++b){
        std::istringstream inputS(*b);
        if (inputS){
            readPrint(inputS);
        } else {
            cerr << "Fail to get string from vector" << endl;
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}