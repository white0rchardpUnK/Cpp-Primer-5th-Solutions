#include <iostream>
#include <string>

using std::string;

//使用类型别名
using stringT = string[10];
stringT *func();

//使用尾置返回类型
auto func() -> string(*)[10];

//使用decltype关键字
string ss[10];
decltype(ss) *func();

//尾置返回类型最好，清晰易读