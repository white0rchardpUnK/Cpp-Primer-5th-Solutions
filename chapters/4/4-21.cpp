#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto i : a){
        cout << (i % 2 != 0 ? i * 2 : i) << " ";
    }
}