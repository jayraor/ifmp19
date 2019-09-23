#include <iostream>
#include <cassert>
 
using namespace std;
 
int main(void)
{   
    // read in integer which is maximally 15
    int a;
    std::cin>>a;
     
    assert(a <= 15);
    int is8 = 0;
    int is4 = 0;
    int is2 = 0;
    int is1 = 0;
     
    // convert now to binary
    if (a == 0)
    {
        cout<<is8<<is4<<is2<<is1<<endl;
        return 0;
    }
     
    is8 = a / 8;
    a -= 8;
     
    if (a == 0)
    {
        cout<<is8<<is4<<is2<<is1<<endl;
        return 0;
    }
 
    is4 = a / 4;
    a -= 4;
 
    if (a == 0)
    {
        cout<<is8<<is4<<is2<<is1<<endl;
        return 0;
    }
 
    is2 = a / 2;
    a -= 2;
     
    if (a == 0)
    {
        cout<<is8<<is4<<is2<<is1<<endl;
        return 0;
    }
 
    is1 = a / 1;
    a -= 1;
 
    cout<<is8<<is4<<is2<<is1<<endl;
    return 0;
 
}
