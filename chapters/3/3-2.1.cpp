//一次读入一整行



#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
    string s1;
    while (getline(cin, s1)){
        cout << s1 << endl;
    }
    return 0;
}