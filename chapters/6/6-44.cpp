#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

inline bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}