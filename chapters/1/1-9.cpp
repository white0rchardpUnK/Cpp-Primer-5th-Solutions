#include <iostream>
/*
 * 使用while循环将50到100的整数相加
 */
int main()
{
    int sum = 0, change = 50;
    while (change <= 100){
        sum += change;
        ++change;
    }
    std::cout << " The sum of 50 to 100 is "
              << sum
              << std::endl;
    return 0;
}
