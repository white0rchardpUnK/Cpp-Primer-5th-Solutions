/*
 * 用cin读入一组字符串并将其存入一个vector对象
 * 将所有词改为大写形式，输出改变后的结果，每词一行
 */
#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::cerr; using std::endl;
using std::vector;
using std::string;

int main()
{
    string word;
    vector<string> texts;
    //将所有单词读入vector对象中
    while (cin >> word){
        texts.push_back(word);
    }
    //将vector中的单词元素全部改为大写
    for (auto &a : texts){
        for (auto &b : a){
            b = toupper(b);
        }
    }
    //输出改变后的值
    for (auto c : texts){
        cout << c << endl;
    }
    return 0;
}