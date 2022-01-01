/*
 * 用cin读入一组字符串并将其存入一个vector对象
 */
#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::cerr;
using std::vector;
using std::string;

int main()
{
    string word;
    vector<string> texts;

    while (cin >> word){
        texts.push_back(word);
    }

    return 0;
}