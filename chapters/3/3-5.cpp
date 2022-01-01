#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    if (cin){
        while (cin >> s1){
            s2 += s1;
        }
    } else{
        cerr << "No input" << endl;
        return -1;
    }

    cout << s2 << endl;
}