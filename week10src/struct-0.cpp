#include <iostream>
#include <string>

struct Student 
{
    std::string name;
    long id;
    std::string subject;
};

int main()
{
    Student s = {"Raul", 18944567123, "D-PHYS"};
    std::cout<< s.name<<" "<< s.id <<" "<<s.subject << std::endl;
}

