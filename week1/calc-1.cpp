#include <iostream>

int main(void)
{
   // Ganzzahldivision
   std::cout<<"Please give me a number: ";
   int num = 0;
   
   std::cin>>num;
   std::cout<<"Please give me another number";
   
   int num2 = 0;
   std::cin>>num2;
   
   // Gebe Ergebnis aus
   std::cout<< num / num2 << std::endl;
   return 0;
}
