/**
 * Arrays of structures
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student 
{   
    // properties, long ist eine größere Ganzzahl
    std::string name;
    long id;
    std::string subject;

    // methods 
    void print()
    {
         std::cout<< name<<" "<< id <<" "<<subject << std::endl;
    }
};

int main()
{   
    std::vector <Student> ETH;
    for (int i = 0; i < 100; i++)
    {   
        Student newStudent = {"Raul", i, "PHYS"};
        ETH.push_back(newStudent);
        ETH[i].print();
    }

}