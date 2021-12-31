//1.9求50至100的整数相加

#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << sum << std::endl;
}