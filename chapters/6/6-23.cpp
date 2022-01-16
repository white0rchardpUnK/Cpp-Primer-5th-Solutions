#include <iostream>
#include <iterator>

using std::cin; using std::cout; using std::endl;

void print(const int &x){
    cout << x << " " << endl;
}

//使用标准库规范
void print(const int *b, const int *e){
    while (b != e){
        cout << *b++ << " ";
    }
    cout << endl;
}

//显式传递一个表示数组大小的形参
void print(const int a[], size_t size){
    for (size_t i = 0; i != size; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

//数组引用形参,a是具有2个整数的整型数组的引用
void print(int (&a)[2]){
    for (auto i : a){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    int i = 0, j[2] = {0, 1};
    print(i);
    print(std::begin(j), std::end(j));
    print(j,std::end(j) - std::begin(j));
    print(j);
}