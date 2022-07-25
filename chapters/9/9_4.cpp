#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;
using VI = vector<int>;

bool findVI(VI::const_iterator b, VI::const_iterator e, int x){
    for (auto it = b; b != e; ++it){
        if (x == *it){
            cout << "Value find" << endl;
            return true;
        }
    }
    cout << "Value not find" << endl;
    return false;
}

int main() {
    cout << "Please type some number: ";
    string stmp;
    std::getline(cin, stmp);
    std::istringstream istmp(stmp);
    int itmp, y;
    VI v;
    while (istmp >> itmp)
        v.push_back(itmp);
    cout << endl;
    cout << "Please type the number want find: ";
    cin >> y;
    findVI(v.cbegin(), v.cend(), y);
}