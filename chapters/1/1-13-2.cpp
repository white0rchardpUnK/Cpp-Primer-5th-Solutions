//1.10使用递减运算符按递减顺序打印出10到0之间的整数

#include <iostream>

int main()
{
    for (int i = 10; i >= 0 ; --i) {
        std::cout << i << std::endl;
    }
}