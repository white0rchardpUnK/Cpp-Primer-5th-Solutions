/*
 * 比较两数组是否相等
 */
#include <iostream>
#include <cstddef>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::cerr;
using std::begin; using std::end;
using std::vector;

constexpr int size = 10;

int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
decltype(a) b = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
decltype(b) c = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int f[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
vector<int> d{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
vector<int> e = d;

int main()
{
    auto x = end(f) - begin(f), y = end(d) - begin(d);
    if (x != y)
        cout << "The two arrays of size are not equal!" << endl;
    for (int *sa = begin(a), *ea = end(a), *sb = begin(b), *eb = end(b);
            sa != ea && sb != eb; ){
        if (*sa == *sb){
            ++sa, ++sb;
        } else{
             cout << "The two arrays are not equal!" << endl;
            break;
        }
    }

    if (d == e)
        cout << "The two vector are equal" << endl;
    else
        cout << "The two vector are not equal" << endl;
}