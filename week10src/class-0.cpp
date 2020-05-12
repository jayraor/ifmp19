/**
 *  Student Class 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{   
    public: 
        string name;
        int id;
};

int main()
{
    Student s;
    s.name = "Raul";
    s.id = 1020101;
    std::cout<<s.name<<s.id<<std::endl;
}
