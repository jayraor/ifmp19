/**
 * bin-2.cpp: Uses the tutorial and improves design
 */
 
 
#include <iostream>
 
using namespace std;
 
int main(void)
{
    // declare variable
    int a;
    cin>>a;
     
    int size = 1;
    int counter = 0;
    // use loop to get size
    while(a / size != 0)
    {
        size *= 2;
        counter++;
    }
 
    size = size / 2;
 
    while (counter >= 0)
    {   
        cout<<a/size;
        counter--;
        if (a / size == 1)
        {
            a = a - size;
        }
        size /= 2;
    }
 
}
