#include <iostream>
#include <list>
#include <forward_list>

using std::cin; using std::cout; using std::endl;
using std::list; using std::forward_list;

void work(list<int> &li){
    auto lib = li.begin();
    while (lib != li.end()){
        if (*lib % 2){
            lib = li.insert(lib, *lib);
            ++lib;
            ++lib;
        } else {
            lib = li.erase(lib);
        }
    }
    for (const auto &a : li)
        cout << a << " ";
    cout << endl;
}

void work(forward_list<int> &fli){
    auto prev = fli.before_begin();
    auto curr = fli.begin();
    while (curr != fli.end()){
        if (*curr % 2){
            curr = fli.insert_after(prev, *curr);
            ++curr;
            ++curr;
            ++prev;
            ++prev;
        } else {
            curr = fli.erase_after(prev);
        }
    }
    for (const auto &b : fli)
        cout << b << " ";
    cout << endl;
}

int main() {
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    work(li);
    forward_list<int> fli = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    work(fli);
}
