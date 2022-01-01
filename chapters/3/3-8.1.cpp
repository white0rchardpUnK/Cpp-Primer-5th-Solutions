//while循环



#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
    string s1("thisISaTest");
    decltype(s1.size()) index = 0;
    while(index != s1.size() && !isspace(s1[index])){
        s1[index] = 'x';
        ++index;
    }

    cout << s1 << endl;

    return 0;
}