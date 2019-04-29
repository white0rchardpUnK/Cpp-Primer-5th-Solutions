#include <iostream>
#include <vector>

using std::vector;  using std::cout;

vector<int> a;

int main(){
    for (int i = 0; i != 100; ++i){
        a.push_back(i);
    }

    for (auto j : a){
        cout << j << " ";
    }

    return 0;
}
