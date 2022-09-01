#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <sstream>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string; using std::list;

int main() {
    list<int> l1;
    vector<int> v2;
    cout << "Please type the number for list<int> l1: ";
    string tmp;
    getline(cin, tmp);
    std::istringstream s(tmp);
    int i, j;
    while (s >> i)
        l1.push_back(i);
    tmp.clear();
    cout << endl;

    cout << "Please type the number for vector<int> v2: ";
    getline(cin, tmp);
    std::istringstream t(tmp);
    while (t >> j)
        v2.push_back(j);
    cout << endl;

    bool lv = true;
    auto l1b = l1.cbegin(), l1e = l1.cend();
    auto v2b = v2.cbegin(), v2e = v2.cend();
    for (;l1b != l1e && v2b != v2e ; ++l1b, ++v2b){
        if (*l1b > *v2b){
            cout << "l1 > v2" << endl;
            lv = false;
            break;
        } else if (*l1b < *v2b){
            cout << "l1 < v2" << endl;
            lv = false;
            break;
        }
    }

    if (lv){
        if (l1.size() > v2.size())
            cout << "l1 < v2" << endl;
        else if (l1.size() < v2.size())
            cout << "l1 > v2" << endl;
        else if (l1.size() == v2.size())
            cout << "l1 = v2" << endl;
    }
}