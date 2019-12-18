//
// Created by Raul Rao on 15/09/19.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include "Student.h"


class Node
{
public:
    Node *next;
    Student s;
    Node();
};


class Queue
{
public:
    Node* first;
    void queue(Student s);
    void dequeue();
    void traverse();
};

#endif //QUEUE_QUEUE_H
