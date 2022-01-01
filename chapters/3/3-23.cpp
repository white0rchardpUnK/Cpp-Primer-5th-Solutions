#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> numbers(10, 3);
    for (auto &x : numbers){
        cout << x << endl;
    }
    for (auto it = numbers.begin(); it != numbers.end(); ++it){
        *it *= 2;
    }
    for (auto &x : numbers){
        cout << x << endl;
    }
}