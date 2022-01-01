//一次读入一个词



#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
    string word;
    while (cin >> word){
        cout << word << endl;
    }

    return 0;
}