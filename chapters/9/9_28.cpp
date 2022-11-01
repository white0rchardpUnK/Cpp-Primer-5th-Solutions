#include <iostream>
#include <forward_list>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string; using std::forward_list;

void flInset(forward_list<string> &a, const string &b,const string &c){
    auto prev = a.before_begin();
    auto curr = a.begin();
    while (curr != a.end()){
        if (*curr == b){
            a.insert_after(curr, c);
            return;
        } else {
            prev = curr++;
        }
    }
    a.insert_after(prev, c);
    for (const auto & i : a)
        cout << i << " ";
    cout << endl;
}

int main() {
    forward_list<string> fls = {"a", "b", "c", "d", "e"};
    for (const auto & a : fls)
        cout << a << " ";
    cout << endl;

    string a = "d", b = "x";
    flInset(fls, a, b);

    string c = "g", d = "y";
    flInset(fls, c, d);
}
