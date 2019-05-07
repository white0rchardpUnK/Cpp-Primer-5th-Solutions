#include <iostream>
#include <vector>
#include <stdexcept>

using std::cin; using std::cout; using std::endl;
using std::vector;

using FP = int (*)(int, int);

int tiadd(int, int);         //加
int tireduce(int, int);      //减
int timultiply(int, int);    //乘
int tidivide(int, int);      //除
void dtm(int, int, FP);      //做计算

int main(){
    vector<FP> fpv;
    fpv.push_back(tiadd);
    fpv.push_back(tireduce);
    fpv.push_back(timultiply);
    fpv.push_back(tidivide);

    cout << "Please type two numbers: " << endl;
    int a = 0, b = 0;
    cin >> a >> b;
    for (auto &c : fpv){
        dtm(a, b, c);
    }

    return EXIT_SUCCESS;
}

int tiadd(int x, int y){
    cout << "Call: " << __func__ << endl;
    return x + y;
}

int tireduce(int x, int y){
    cout << "Call: " << __func__ << endl;
    return x - y;
}

int timultiply(int x, int y){
    cout << "Call: " << __func__ << endl;
    return x * y;
}

int tidivide(int x, int y){
    try {
        if (y == 0){
            throw std::runtime_error("0 is illegal!");
        } else {
            cout << "Call: " << __func__ << endl;
            return x / y;
        }
    } catch (std::runtime_error err){
        cout << err.what() << endl;
        return EXIT_FAILURE;
    }
}

void dtm(int x, int y, FP z){
    cout << z(x, y) << endl;
}