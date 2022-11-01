#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int main() {
    cout << "Please type some number for vector<int>: ";
    vector<int> v;
    string s;
    getline(cin, s);
    std::istringstream iss(s);
    int i;
    while (iss >> i)
        v.push_back(i);

    vector<int> vx;
    cout << v.back() << endl;
    cout << v.front() << endl;
    cout << v[0] << endl;
    cout << v.at(1) << endl;

    //在空vector中全部错误
    cout << vx.back() << endl;
    cout << vx.front() << endl;
    cout << vx[0] << endl;
    cout << vx.at(1) << endl;
}
