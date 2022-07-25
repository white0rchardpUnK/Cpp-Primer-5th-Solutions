#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;
using VI = vector<int>;

int findVI(VI::const_iterator b, VI::const_iterator e, int x){
    for (auto it = b; b != e; ++it){
        if (*it == x){
            cout << "Value " << *it << " find at index: "
                 << it - b << endl;
            return *it;
        } else {
            break;
        }
    }
    cout << "Value not find, return last value" << endl;
    return *(e - 1);
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
    int tmp = findVI(v.cbegin(), v.cend(), y);
}