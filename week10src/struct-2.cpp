/**
 *  Dynamic structures
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student 
{   
    // properties
    std::string name;
    long id;
    std::string subject;

    // methods 
    void print()
    {
         std::cout<< name<<" "<< id <<" "<<subject << std::endl;
    }
};


struct university
{
    string name;
    vector <Student> database;
    string rector;

    // methods
    void fill(Student s)
    {
        database.push_back(s);
    }

    void find (Student s)
    {
        for (int i = 0; i < database.size();i++)
        {
            if (s.name == database[i].name && s.id == database[i].id && s.subject == database[i].subject)
            {
                cout<<"FOUND!"<<endl;
                return;
            }
        }

        cout<<"NOT FOUND!"<<endl;
        return;
    }

    void print()
    {
        for (int i = 0; i < database.size(); i++)
        {   
            database[i].print();
        }
    }
};

int main(void)
{
    university ETH;
    Student s1 = {"Max", 12345678, "Physik"};
    Student s2 = {"Moritz", 123456789, "Physik"};
    Student s3 = {"Kevin", 12345662678, "Mathematik"};
    ETH.fill(s1);
    ETH.fill(s2);
    ETH.fill(s3);
    ETH.find(s2);
    Student s4 = {"Felix", 12378, "Philosophie"};
    ETH.find(s4);   
}