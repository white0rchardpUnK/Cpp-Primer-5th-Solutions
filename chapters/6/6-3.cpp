#include <iostream>

using std::cin; using std::cout; using std::endl;

int fact(int number) {
    int a = 1;
    while (number > 1) {
        a *= number--;
    }
    if (number == 0) {
        a = 1;
    }
    return a;
}

int main(){

    int tmp;
    cout << "Please type a number: "<< endl;
    while (cin>>tmp){
        cout << fact(tmp);
    }
}