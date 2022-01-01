//比较是否相等，输出较大



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
    cin >> s1 >> s2;
    if (cin){
        if (s1 == s2){
            cout << "They are equal" << endl;
        } else{
            if (s1 > s2) {
                cout << s1 << endl;
            } else {
                cout << s2 << endl;
            }
        }
    }

    return 0;
}