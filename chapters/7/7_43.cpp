#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::string;

class NoDefault{
public:
    NoDefault(int x):y(x){}
private:
    int y;
};

class C{
public:
    C():cn(1){}
private:
    NoDefault cn;
};

int main(){
    C z;
}