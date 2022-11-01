#include <iostream>
#include <vector>
#include <list>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::list;

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    for (const auto &a : ia)
        cout << a << " ";
    cout << endl;

    vector<int> even;
    list<int> odd;
    int *iab = std::begin(ia);
    int *iae = std::end(ia);

    while (iab != iae){
        even.push_back(*iab);
        odd.push_front(*iab);
        ++iab;
    }

    //删除vector<int> even中的偶数元素
    auto vit = even.begin();
    while (vit != even.end()){
        if (*vit % 2 == 0){
            vit = even.erase(vit);
        } else {
            ++vit;
        }
    }
    for (const auto &a : even)
        cout << a << " ";
    cout << endl;

    //删除list<int> odd中的奇数元素
    auto lit = odd.begin();
    while (lit != odd.end()){
        if (*lit % 2 != 0){
            lit = odd.erase(lit);
        } else {
            ++lit;
        }
    }
    for (const auto &a : odd)
        cout << a << " ";
    cout << endl;
}
