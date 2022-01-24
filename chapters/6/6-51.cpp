#include <iostream>

using std::cin; using std::cout; using std::endl;

void f(){
    cout << "I'm " << __func__ << " in " << __LINE__ << endl;
}

void f(int){
    cout << "I'm " << __func__ << " in " << __LINE__ << endl;
}

void f(int, int){
    cout << "I'm " << __func__ << " in " << __LINE__ << endl;
}

void f(double, double = 3.14){
    cout << "I'm " << __func__ << " in " << __LINE__ << endl;
}

int main(int argc, char *argv[]){
    f(2.56, 42); //编译错误，二义性
    f(42);
    f(42, 0);
    f(2.56, 3.14);
}