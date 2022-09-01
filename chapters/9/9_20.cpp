#include <iostream>
#include <list>
#include <deque>
#include <string>
#include <sstream>

using std::cin; using std::cout; using std::endl;
using std::string; using std::list; using std::deque;

int main() {
    cout << "Please type some number for list<int>: ";
    list<int> l;
    string s;
    getline(cin, s);
    std::istringstream is(s);
    int i;
    while (is >> i)
        l.push_front(i);

    deque<int> odd;
    deque<int> even;
    for (auto lb = l.cbegin(), le = l.cend(); lb != le; ++lb){
        if (*lb % 2 != 0){
            odd.push_front(*lb);
        } else {
            even.push_back(*lb);
        }
    }

    for (const auto &o : odd)
        cout << o << " ";
    cout << endl;
    for (const auto &e : even)
        cout << e << " ";
}