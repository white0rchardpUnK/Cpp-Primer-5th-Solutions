#include <iostream>

using std::cin; using std::cout; using std::endl;

int rp(int number){
    int a = 0;
    return a += number;
}


int main(){
    int tmp;
    cout << "Please type a real parameter: " << endl;
    while (cin >> tmp){
        if (tmp >= 0){
            cout << "The function's real parameter is: " <<rp(tmp);
        } else {
            cout << "The function's real parameter is: " <<(-rp(tmp));
        }
    }
}