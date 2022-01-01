// 1.9



#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i = 50, sum = 0;
    while (i <= 100){
        sum += i;
        ++i;
    }
    cout << "The sum of 50 to 100 is : " << sum << endl;

    return 0;
}