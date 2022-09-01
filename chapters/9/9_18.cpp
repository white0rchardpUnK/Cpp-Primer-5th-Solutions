#include <iostream>
#include <deque>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string; using std::deque;

int main() {
    cout << "Please type some word: " << endl;
    string s;
    deque<string> ds;
    auto iter = ds.begin();
    while (cin >> s)
        iter = ds.insert(iter, s);
    for (auto b = ds.cbegin(), e = ds.cend(); b != e; ++b)
        cout << *b << endl;
}