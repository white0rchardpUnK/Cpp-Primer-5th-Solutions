#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
#include <string>
using std::string;
#include <memory>
using std::unique_ptr;

int main() {
    int ix = 1024;
    int *pi = &ix;
    int *pi2 = new int(2048);

    typedef unique_ptr<int> IntP;
}