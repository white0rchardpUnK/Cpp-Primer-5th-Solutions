#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
    string s1("this!!!!!!is!!!!!!!!!! a!!!!!!!!!!! test");
    decltype(s1.size()) index = 0;
    for (auto &c : s1){
        if (ispunct(c)){
            c = ' ';
        }
    }

    cout << s1 << endl;

    return 0;
}