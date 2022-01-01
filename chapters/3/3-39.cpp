#include <iostream>
#include <string>
#include <cstring>

using std::cin; using std::cout; using std::endl; using std::cerr;
using std::begin; using std::end;
using std::string;
using std::strcmp;

int main()
{
    //比较两个string对象
    string a = "test";
    string b = "tst";
    if (a > b)
        cout << "a > b" << endl;
    else if (a == b)
        cout << "a == b" << endl;
    else
        cout << "a < b " << endl;

    //比较两个C风格字符串
    const char x[] = "C++ Primer";
    const char y[] ="C++ Primer Plus";

    if (strcmp(x, y) == 0)
        cout << "x = y" << endl;
    else if (strcmp(x, y) < 0)
        cout << "x < y " << endl;
    else
        cout << "x > y" << endl;
}