#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

void recintvector(const vector<int>::iterator b, const vector<int>::iterator e){
#ifndef NDEBUG
    cout << __func__ << " in " << __FILE__ << endl
         << "at line: " << __LINE__ << endl
         << "Compiled on " << __DATE__ << " at "
         << __TIME__ << endl
         << "The vector size is: " << e - b << endl;
#endif
    if (b != e){
        cout << *b << " ";
        recintvector(b+1, e);
    } else {
        return;
    }
}

int main(int argc, char *argv[]){
    vector<int> i = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    recintvector(i.begin(), i.end());
}