/**
 * Complex datatype
 * 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Complex 
{
    double re;
    double im;

    void print()
    {
        cout<<re<<" + "<<im<<"i"<<endl;
    }
};

Complex add(Complex z1, Complex z2)
{
    Complex z = {z1.re + z2.re, z1.im + z2.im};
    return z;
};


double magnitude(Complex z)
{
    return z.im*z.im + z.re*z.re;
}

int main()
{   
    Complex z = {1,2};
    cout<<magnitude(z)<<endl;
    Complex z2 = {3,4};
    add(z,z2).print();
    return 0;
}
