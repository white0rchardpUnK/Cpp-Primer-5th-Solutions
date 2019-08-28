#include <iostream>

int main()
{
    std::cout << "Enter 2 numbers:" << std::endl;
    int a1 = 0, a2 = 0;
    std::cin >> a1 >> a2;
    std::cout << "The product of ";
    std::cout << a1;
    std::cout << " and ";
    std::cout << a2;
    std::cout << " is ";
    std::cout << a1 * a2 <<std::endl;
    return 0;
}