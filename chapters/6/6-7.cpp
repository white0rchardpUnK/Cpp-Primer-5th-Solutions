#include <iostream>

using std::cin; using std::cout; using std::endl;

size_t self_acount(){
    static size_t fcall = 0;
    static int count = 0;
    if (!fcall){
        return fcall++;
    } else {
        return ++count;
    }
}

int main(){
    int a = 0;
    while (a != 10){
        cout << self_acount() << " ";
        ++a;
    }
}