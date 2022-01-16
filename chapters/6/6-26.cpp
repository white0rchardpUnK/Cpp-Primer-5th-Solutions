#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main(int argc, char *argv[]){
    for (int i = 0; i != argc; ++i){
        cout << i << " " << argv[i] << endl;
    }
}