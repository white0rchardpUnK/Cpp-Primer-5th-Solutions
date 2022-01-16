#include <iostream>
#include <string>
#include <cctype>


using std::cin; using std::cout; using std::endl;
using std::string;

//判断字符串中是否有大写字母
bool has_supper(const string &s){
    for (auto c : s){
        if (isupper(c)){
            return true;
        }
    }
    return false;
}
//将string对象全都改写成小写字母
void ctlower(string &x){
    string tmp = x;
    if (has_supper(tmp)){
        for (auto &c : x){
            c = tolower(c);
        }
        cout << x << endl;
    } else {
        cout << "There is no supper words in it" << endl;
    }
}

int main(){
    string a = "asdfEasdfzxcvASDFQWE";
    ctlower(a);
}

/*
    两个函数使用不同的形参类型

    has_supper不需要改变string对象的内容，形参可使用常量引用

    ctlower需要改变string对象的内容，形参不能使用常量引用

    在ctlower中使用tmp作为s的副本，传入has_supper中匹配常量引用，解决两个函数普通引用与常量引用不能匹配的问题
*/