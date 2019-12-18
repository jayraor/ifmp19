//
// Created by Raul Rao on 15/09/19.
//

#include "Queue.h"

// implement node class
Node::Node():s(1001,"David", "ETH Zurich")
{
    this->next = NULL;
}

void Queue::queue(Student s)
{
    Node* ptr = new Node();
    ptr = first;
    int length = 0;
    while(ptr->next)
}

