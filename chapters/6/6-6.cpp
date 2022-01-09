/*
    形参和局部变量都属于自动对象，即只存在于块执行期间的对象

在函数中使用static定义局部静态变量，一旦定义并初始化后将在块执行完毕后继续存在直到程序结束
*/
#include <iostream>

using std::cin; using std::cout; using std::endl;

size_t self_count(int limit){
    static size_t count = 0;
    int start = 0;
    for (;start != limit; ++start){
        ++count;
    }
    return count;
}

int main(){
    int input;
    cout << "Type the limit you want: ";
    cin >> input;
    cout << self_count(input) << " ";
}
