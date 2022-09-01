#include <iostream>
#include <vector>
#include <list>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::list; using std::string;

int main() {
    list<char *> l = {"Mo", "Ha"};
    vector<string> v;
    v.assign(l.cbegin(), l.cend());
    cout << v[0] << " " << v[1] << endl;
}