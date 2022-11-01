#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

int main() {
    vector<char> v = {'t', 'e', 's', 't'};
    string s(v.cbegin(), v.cend());
    cout << s;
}
