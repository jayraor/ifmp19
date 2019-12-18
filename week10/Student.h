//
// Created by Raul Rao on 15/09/19.
//

#ifndef QUEUE_STUDENT_H
#define QUEUE_STUDENT_H
#include <string>
using namespace std;

class Student
{
public:
    int id;
    string name;
    string uni;
    bool matr;
    Student(int id, string name, string uni);
    void matri();
    void exm();
};


#endif //QUEUE_STUDENT_H
