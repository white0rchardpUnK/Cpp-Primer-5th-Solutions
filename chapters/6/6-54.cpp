#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int func(int, int);

int func(int a, int b){
    cout << a << " " << b;
}

typedef decltype(func) *FP;

using (int (*)(int, int)) = fp;

vector<fp> fpv;

int main(){
    fpv.push_back(func);
    auto b = fpv.begin();
    cout << *b << endl;
    cout << fpv[0] << endl;
}