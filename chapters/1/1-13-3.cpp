//1.11提示用户输入两整数，打印两整数所指定范围内的所有整数

#include <iostream>

int main()
{
    std::cout << "Please enter two numbers: " << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    while (n1 > n2){
        for (int i = n1 - n2; i >= 0 ; --i) {
            std::cout << i <<std::endl;
        }
    }
    while (n2 > n1){
        for (int i = n2 - n1; i >= 0 ; --i) {
            std::cout << i <<std::endl;
        }
    }
    return 0;
}