#include <iostream>
/*
 * 提示用户输入两个数，打印此两数所指定范围内的所有整数
 * 存在缺陷，两数相等时未处理
 */
 int main()
{
     std::cout << "Please enter two numbers: " << std::endl;    //提示用户输入数
     int n1 = 0, n2 = 0;    //初始化两变量
     std::cin >> n1 >> n2;  //将输入值赋予两变量
     //情况1：n1 > n2
     while(n1 >= n2){
         std::cout << n1 << std::endl;
         --n1;
     }
     //情况2： n1 < n2
     while (n1 <= n2){
         std::cout << n2 << std::endl;
         --n2;
     }
    return 0;
}