#include <iostream>

int main()
{
    int sum = 0, tmp = 0;
    while (std::cin >> tmp)
        sum += tmp;
    std::cout <<"The sum is: "
              <<sum << std::endl;
    return 0;
}