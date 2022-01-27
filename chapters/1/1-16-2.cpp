#include<iostream>

int main(){
   int sum = 0, v = 0;
   std::cout << "Please type some number, end with Ctrl+D"
             << std::endl;
   for ( ; std::cin >> v; ){
      sum += v;
   }
   std::cout << "The sum of all input numbers is "
             << sum << std::endl;
   return 0;
}