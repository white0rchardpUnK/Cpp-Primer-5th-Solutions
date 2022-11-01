#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;

string addS(const string &name, const string &pf, const string &sf){
    string tmp(name.cbegin(), name.cend());
    tmp.insert(0, pf);
    tmp.insert(tmp.size(), sf);
    return tmp;
}

int main() {
    cout << addS("Jack", "Mr.", "Jr.") << endl;
}
