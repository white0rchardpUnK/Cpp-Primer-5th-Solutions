#include <iostream>

using std::cin; using std::cout; using std::endl;

void swapip(int **pp, int **qq){
    int *tmp = *pp;
    *pp = *qq;
    *qq = tmp;
}

int main(){
    int a = 100, b = 1000;
    int *p1 = &a, *p2 = &b;
    int **pp1 = &p1, **pp2 = &p2;
    cout << p1 << " " << p2 << endl;
    cout << *p1 << " " << *p2 << endl;
    swapip(pp1, pp2);
    cout << p1 << " " << p2 << endl;
    cout << *p1 << " " << *p2 << endl;
}

/*
输出：

0x7ffffffeeae0 0x7ffffffeeae4
100 1000
0x7ffffffeeae4 0x7ffffffeeae0
1000 100

成功通过“指针的指针”改变“指针的指针的地址”
*/