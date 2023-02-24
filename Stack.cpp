//
// Created by Haibin Cao on 2/23/23.
//

#include "Stack.h"

template<typename T>
T &Stack<T>::top()
{

}

template<typename T>
void Stack<T>::seek()
{

}

template<typename T>
void Stack<T>::pop()
{

}

template<typename T>
void Stack<T>::push(T &item)
{
    list.push_front(item);
}

template<typename T>
bool Stack<T>::empty()
{
    return false;
}

template<typename T>
int Stack<T>::size()
{
    return 0;
}

template<typename T>
Stack<T> &Stack<T>::operator=(const Stack &stack)
{

}
