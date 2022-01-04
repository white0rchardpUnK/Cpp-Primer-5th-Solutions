#include <iostream>

using std::cout;    using std::endl;

int main(){
    cout << "bool" << "内置类型所占空间大小为" << sizeof(bool) << endl;
    cout << "char" << "内置类型所占空间大小为" << sizeof(char) << endl;
    cout << "char" << "内置类型所占空间大小为" << sizeof(char) << endl;
    cout << "wchar_t" << "内置类型所占空间大小为" << sizeof(wchar_t) << endl;
    cout << "char16_t" << "内置类型所占空间大小为" << sizeof(char16_t) << endl;
    cout << "char32_t" << "内置类型所占空间大小为" << sizeof(char32_t) << endl;
    cout << "short" << "内置类型所占空间大小为" << sizeof(short) << endl;
    cout << "int" << "内置类型所占空间大小为" << sizeof(int) << endl;
    cout << "long" << "内置类型所占空间大小为" << sizeof(long) << endl;
    cout << "long long" << "内置类型所占空间大小为" << sizeof(long long) << endl;
    cout << "float" << "内置类型所占空间大小为" << sizeof(float) << endl;
    cout << "double" << "内置类型所占空间大小为" << sizeof(double) << endl;
    cout << "long double" << "内置类型所占空间大小为" << sizeof(long double) << endl;
}

/*
bool内置类型所占空间大小为1
char内置类型所占空间大小为1
char内置类型所占空间大小为1
wchar_t内置类型所占空间大小为4
char16_t内置类型所占空间大小为2
char32_t内置类型所占空间大小为4
short内置类型所占空间大小为2
int内置类型所占空间大小为4
long内置类型所占空间大小为8
long long内置类型所占空间大小为8
float内置类型所占空间大小为4
double内置类型所占空间大小为8
long double内置类型所占空间大小为16
*/