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

    Complex operator+ (Complex z1)
    {
        Complex z = {z1.re + re, z1.im + im};
        return z;
    }
};

int main()
{   
    Complex z1 = {1, 1};
    Complex z2 = {2, 3};
    (z1 + z2).print();
    return 0;
}
