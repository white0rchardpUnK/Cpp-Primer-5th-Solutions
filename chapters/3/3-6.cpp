#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
    string s1("this IS a Test");

    for(auto &a : s1){
        a = 'x';
    }

    cout << s1 << endl;

    return 0;
}