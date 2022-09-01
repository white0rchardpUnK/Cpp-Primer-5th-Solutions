#include <iostream>
#include <list>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string; using std::list;

int main() {
    cout << "Please type some word: " << endl;
    string s;
    list<string> lt;
    auto iter = lt.begin();
    while (cin >> s)
        iter = lt.insert(iter, s);
    for (auto b = lt.cbegin(), e = lt.cend(); b != e; ++b)
        cout << *b << endl;
}