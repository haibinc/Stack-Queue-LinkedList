//
// Created by Haibin Cao on 2/23/23.
//

#ifndef SPRING_CS008LINKEDLIST_STACK_H
#define SPRING_CS008LINKEDLIST_STACK_H
#include "LinkedList.h"

template <typename T>
class Stack: public LinkedList<T>
{
private:
    LinkedList<T> list;
public:
    T& top();
    void seek();
    void pop();
    void push(T& item);
    bool empty();
    int size();
    Stack<T>& operator=(const Stack& stack);
};


#endif //SPRING_CS008LINKEDLIST_STACK_H
