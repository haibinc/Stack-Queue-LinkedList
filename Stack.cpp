//
// Created by Haibin Cao on 2/23/23.
//
#ifndef SPRING_CS008LINKEDLIST_STACK_CPP
#define SPRING_CS008LINKEDLIST_STACK_CPP
#include "Stack.h"

template<typename T>
T &Stack<T>::top()
{
    return list.front();
}

template<typename T>
int Stack<T>::seek(const int& n)
{
    assert(size() > n);
    int index = 0;
    node_Iterator = list.begin();
//    for (index = 0; index < n; ++node_Iterator)
//    {
//
//    }
}

template<typename T>
void Stack<T>::pop()
{
    list.pop_front();
}

template<typename T>
void Stack<T>::push(const T &item)
{
    list.push_front(item);
}

template<typename T>
bool Stack<T>::empty()
{
    return list.empty();
}

template<typename T>
int Stack<T>::size()
{
    return list.size();
}

template<typename T>
Stack<T> &Stack<T>::operator=(const Stack &stack)
{
    this->list = stack.list;
    return *this;
}

template<typename S>
std::ostream &operator<<(std::ostream &out, const Stack<S> &stack)
{
    out << stack.list;
    return out;
}

#endif