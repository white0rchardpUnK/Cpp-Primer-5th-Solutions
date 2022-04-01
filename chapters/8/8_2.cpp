#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

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
    readPrint(cin);
}