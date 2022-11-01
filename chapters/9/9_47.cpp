#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;

void findNum1(const string &s){
    cout << "Find numbers version1, using find_first_of" << endl;
    string numbers{"0123456789"};
    decltype(s.size()) pos = 0;
    while ((pos = s.find_first_of(numbers, pos)) != string::npos){
        cout << "find number at index: " << pos << " element is "
             << s[pos] << endl;
        ++pos;
    }
}

void findAlpha1(const string &s){
    cout << "Find alpha version1, using find_first_of" << endl;
    string alpha{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string::size_type pos = 0;
    while ((pos = s.find_first_of(alpha, pos)) != string::npos){
        cout << "find number at index: " << pos << " element is "
             << s[pos] << endl;
        ++pos;
    }
}

void findNum2(const string &s){
    cout << "Find numbers version2, using find_first_not_of" << endl;
    string alpha{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    decltype(s.size()) pos = 0;
    while ((pos = s.find_first_not_of(alpha, pos)) != string::npos){
        cout << "find number at index: " << pos << " element is "
             << s[pos] << endl;
        ++pos;
    }
}

void findAlpha2(const string &s){
    cout << "Find alpha version2, using find_first_not_of" << endl;
    string numbers{"0123456789"};
    string::size_type pos = 0;
    while ((pos = s.find_first_not_of(numbers, pos)) != string::npos){
        cout << "find alpha at index: " << pos << " element is "
             << s[pos] << endl;
        ++pos;
    }
}

int main() {
    string s{"ab2c3d7R4E6"};
    findNum1(s);
    findAlpha1(s);
    findNum2(s);
    findAlpha2(s);
}
