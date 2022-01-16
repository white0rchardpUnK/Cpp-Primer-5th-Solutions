#include <iostream>

using std::cin; using std::cout; using std::endl;

int comparebig(const int &a, const int *p){
    if (a > *p){
        return a;
    } else if (a == *p){
        cout << "They are equal!" << endl;
    } else {
        return *p;
    }
}

int main(){
    int a = 100;
    int b = 1000;
    int *p = &b;
    cout << comparebig(a, p) << endl;
}

//无需改变对象的值，指针的类型应是const int *