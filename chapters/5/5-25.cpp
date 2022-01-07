#include <iostream>
#include <stdexcept>

using std::cin; using std::cout; using std::endl;

int main(){
    int a = 0, b = 0;
    bool dflag = false;
    do {
        try {
            cout << "Pleas type two numbers to divide: " << endl;
            cin >> a >> b;
            if (b == 0){
                throw std::runtime_error("除数不能为0");
            } else {
                cout << "The result is " << a / b << endl;
                dflag = true;
            }
        } catch (std::runtime_error err){
            cout << err.what()
                 << "\nRetype numbers？Enter y or n: \n";
            char c;
            cin >> c;
            if (!c || c == 'n'){
                break;
            }
        }
    } while (!dflag);
}