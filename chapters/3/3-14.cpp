/*
 * 用cin读入一组整数并将其存入一个vector对象
 */
#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::cerr;
using std::vector;

int main()
{
    int number = 0;
    vector<int> numbers;

    while (cin >> number){
        numbers.push_back(number);
    }

    return 0;
}