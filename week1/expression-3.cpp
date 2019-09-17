/**
 * expression-3.cpp: multiply 4 by 8 with less than 8 additions
 */  

#include <iostream>
int main(void)
{   
    // declare variable
    int a = 4;
    int b = a + a;
    int c = b + b;
    int d = c + c;
    
    // output result
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    
    return 0;
}


