// 1.11



#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    cout << "Please enter two numbers: " << endl;
    int a = 0, b = 0;
    cin >> a >> b;
    if (cin){
        if (a > b){
            while (a > b){
                cout << a << endl;
                --a;
            }
        }
        if (a == b){
            cout << b << endl;
        }
        if (a < b){
            while (b >= a){
                cout << b << endl;
                --b;
            }
        }
    } else{
        cerr << "ERROR: Please enter numbers" << endl;
        return -1;
    }

    return 0;
}