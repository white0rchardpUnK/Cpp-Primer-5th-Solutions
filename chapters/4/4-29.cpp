#include <iostream>

using std::cout;    using std::endl;

int main(){
    int x[10];
    int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(*x) << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
}

/*
输出

10
2
40
4
8
4

4-28中int占4个字节，x含10个int元素故sizeof(x)=40

*x指向的是数组的第一个元素，故sizeof(\*x)=4

p是指针，所占大小空间为sizeof(p)=8

*p指向数组的第一个元素，故sizeof(\*p)=4
*/