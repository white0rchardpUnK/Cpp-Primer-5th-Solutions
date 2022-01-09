#include <iostream>

using std::cin; using std::cout; using std::endl;

void swap(int *p1, int *p2){
    int tmp = 0;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main(){
    int a = 100, b = 200;
    int *p = &a, *q = &b;
    swap (p, q);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "*p: " << *p << endl;
    cout << "*q: " << *q << endl;
}