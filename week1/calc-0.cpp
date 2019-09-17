#include <iostream>

int main(void)
{
   std::cout<<"Please give me a number: ";
   int num = 0;
   std::cin>>num;
   std::cout<<"Please give me another number";
   int num2 = 0;
   std::cin>>num2;
   std::cout<<"The sum is: " << num + num2 << std::endl;
  
   return 0;
}
