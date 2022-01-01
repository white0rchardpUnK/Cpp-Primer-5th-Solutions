#include <iostream>
#include <cstring>

using std::cin; using std::cout; using std::endl; using std::cerr;
using std::begin; using std::end;
using std::strcmp; using std::strcpy; using std::strcat;

int main()
{
    const char a[] = "A test";
    const char b[] = "about it";
    char c[16];
    strcpy(c, a);
    strcat(c, " ");
    strcat(c, b);
    cout << c << endl;
}