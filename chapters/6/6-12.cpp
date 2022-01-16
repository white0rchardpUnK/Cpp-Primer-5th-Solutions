#include <iostream>

using std::cin; using std::cout; using std::endl;

void swap(int &p1, int &p2){
    int tmp = p1;
    p1 = p2;
    p2 = tmp;
}

int main(){
    int a = 100, b = 200;
    swap (a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

/*
    传引用更易于使用

    代码逻辑清晰，直接在对象上操作省去拷贝资源开销
*/