//
// Created by Raul Rao on 15/09/19.
//

#include "Student.h"

Student::Student(int id, string name, string uni)
{
    this->id = id;
    this->name = name;
    this->uni = uni;
    this->matr = true;
}

void Student::matri()
{
    this->matr = true;
}

void Student::exm()
{
    this->matr = false;
}

