#include <iostream>
#include <string>

using std::string;

typedef string Type;
Type initial();		//Type为string
class Exercise{
public:
    typedef double Type;		//隐藏外层Type定义
    Type setVal(Type);			//Type为double
    Type initial();				//Type为double
private:
    int val;
};
//错误，返回类型与声明的Type不匹配，这里Type为string，应为double
Type Exercise::setVal(Type parm) {
    val = parm + initial();
    return val;
}
//修正，使用作用域运算符指定返回类型的Type为Exercise中定义的，与声明一致
Exercise::Type Exercise::setVal(Type parm) {
    val = parm + initial();
    return val;
}