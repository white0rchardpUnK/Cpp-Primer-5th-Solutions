#include <iostream>
#include <forward_list>

using std::cin; using std::cout; using std::endl;
using std::forward_list;

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    for (const auto &a : ia)
        cout << a << " ";
    cout << endl;

    int *iab = std::begin(ia);
    int *iae = std::end(ia);
    forward_list<int> fl;
    auto flOb = fl.before_begin();

    while (iab != iae){
        flOb = fl.insert_after(flOb, *iab);
        ++iab;
    }

    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()){
        if (*curr % 2 != 0){
            curr = fl.erase_after(prev);
        } else {
            prev = curr;
            ++curr;
        }
    }
    for (const auto &a : fl)
        cout << a << " ";
}
