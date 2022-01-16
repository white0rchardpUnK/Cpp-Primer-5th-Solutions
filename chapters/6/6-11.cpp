#include <iostream>

using std::cin; using std::cout; using std::endl;

void reset(int &x){
    x = 0;
}

int main(){
    int a = 100;
    reset(a);
    cout << a ;
}