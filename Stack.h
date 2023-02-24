//
// Created by Haibin Cao on 2/23/23.
//

#ifndef SPRING_CS008LINKEDLIST_STACK_H
#define SPRING_CS008LINKEDLIST_STACK_H
#include "LinkedList.h"
#include "Node_Iterator.h"

template <typename T>
class Stack
{
private:
    LinkedList<T> list;
    Node_Iterator<T> node_Iterator;
public:
    T& top();
    int seek(const int& n);
    void pop();
    void push(const T& item);
    bool empty();
    int size();
    Stack<T>& operator=(const Stack& stack);
    template<typename S>
    friend std::ostream& operator<<(std::ostream& out, const Stack<S>& stack);
};

#include "Stack.cpp"
#endif //SPRING_CS008LINKEDLIST_STACK_H
