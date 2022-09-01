#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;

int main() {
    vector<int> v1;
    vector<int> v2;
    cout << "Please type the number for vector<int> v1: ";
    string tmp;
    getline(cin, tmp);
    std::istringstream s(tmp);
    int i, j;
    while (s >> i)
        v1.push_back(i);
    tmp.clear();
    cout << endl;

    cout << "Please type the number for vector<int> v2: ";
    getline(cin, tmp);
    std::istringstream t(tmp);
    while (t >> j)
        v2.push_back(j);
    cout << endl;

    if (v1 == v2)
        cout << "v1 == v2" << endl;
    else if (v1 < v2)
        cout << "v1 < v2" << endl;
    else
        cout << "v1 > v2" << endl;
}