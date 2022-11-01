#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;

string addS(const string &name, const string &pf, const string &sf){
    string tmp(name.cbegin(), name.cend());
    tmp.insert(tmp.begin(), pf.cbegin(), pf.cend());
    tmp.append(sf.cbegin(), sf.cend());
    return tmp;
}

int main() {
    cout << addS("Jack", "Mr.", "Jr.") << endl;
}
