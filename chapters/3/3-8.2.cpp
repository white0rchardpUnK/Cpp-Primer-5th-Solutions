//for循环



#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
    string s1("thisISaTest");
    for(decltype(s1.size()) index = 0; index != s1.size() && !isspace(s1[index]); ++index){
        s1[index] = 'x';
    }
    cout << s1 << endl;

    return 0;
}
//范围for形式更好，无需繁杂的边界条件判断，清晰易读