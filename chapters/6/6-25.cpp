#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main(int argc, char *argv[]){
    for (int i = 0; i != argc; ++i){
        cout << i << " " << argv[i] << endl;
    }

    string s = argv[1];
    s += argv[2];
    cout << s << endl;
}

/*
选项为 -d -o ofile data0

输出

1 -d
2 -o
3 ofile
4 data0
-d-o
*/