#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main(){
    string flag;
    do {
        cout << "Please type two strings: ";
        string a, b;
        cin >> a >> b;
        if (a.size() > b.size()){
            cout << "The shorter one is " << b << endl;
        } else if (a.size() == b.size()){
            cout << "No shorter" << endl;
        } else {
            cout << "The shorter one is " << a << endl;
        }
        cout << "Continue or not?:(y/n) ";
        cin >> flag;
    } while (!flag.empty() && flag[0] != 'n');
}