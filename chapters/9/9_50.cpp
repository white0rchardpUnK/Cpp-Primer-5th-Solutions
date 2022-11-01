#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
#include <string>
using std::string; using std::stoi; using std::stod;
#include <vector>
using std::vector;

int sumVSI(const vector<string> &vs){
    for (const auto &a : vs)
        cout << a << " ";
    cout << endl;
    int sum, tmp;
    string nc{"+-.0123456789"};
    for (auto vsb = vs.cbegin(), vsc = vs.cend();
         vsb != vsc; ++vsb){
        tmp = stoi((*vsb).substr((*vsb).find_first_of(nc)));
        sum += tmp;
    }
    return sum;
}

double sumVSD(const vector<string> &vs){
    for (const auto &a : vs)
        cout << a << " ";
    cout << endl;
    int sum, tmp;
    string nc{"+-.0123456789"};
    for (const auto &a : vs){
        tmp = stod(a.substr(a.find_first_of(nc)));
        sum += tmp;
    }
    return sum;
}

int main() {
    vector<string> v1{"42", "100", "052", "0x64"};
    vector<string> v2{"3.14159", "-.14159", "+3.0"};

    cout << sumVSI(v1) << endl;
    cout << sumVSD(v2) << endl;
}
