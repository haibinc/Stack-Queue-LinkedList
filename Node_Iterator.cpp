//
// Created by Haibin Cao on 2/7/23.
//
#ifndef SPRING_CS008LINKEDLIST_NODE_ITERATOR_CPP
#define SPRING_CS008LINKEDLIST_NODE_ITERATOR_CPP
#include "Node_Iterator.h"

template<typename T>
Node_Iterator<T>::Node_Iterator()
:Node_Iterator(nullptr)
{

}

template<typename T>
Node_Iterator<T>::Node_Iterator(Node<T> *node)
:current(node)
{

}

template<typename T>
Node_Iterator<T> &Node_Iterator<T>::operator++()
{
    current = current->next;
    return *this;
}

template<typename T>
Node_Iterator<T> Node_Iterator<T>::operator++(int)
{
    Node_Iterator<T> iterator = current;
    current = current->next;
    return iterator;
}

template<typename T>
Node_Iterator<T> &Node_Iterator<T>::operator--()
{
    current = current->previous;
    return *this;
}

template<typename T>
Node_Iterator<T> Node_Iterator<T>::operator--(int)
{
   Node_Iterator<T> iterator = current;
   current = current->previous;
   return iterator;
}

template<typename T>
T &Node_Iterator<T>::operator*()
{
    return current->data;
}

template<typename T>
const T &Node_Iterator<T>::operator*() const
{
    T data = current->data;
    return data;
}

#endif