//
// Created by Haibin Cao on 2/7/23.
//
#ifndef SPRING_CS008LINKEDLIST_NODE_ITERATOR_CPP
#define SPRING_CS008LINKEDLIST_NODE_ITERATOR_CPP
#include "Node_Iterator.h"

template<typename T>
Node_Iterator<T>::Node_Iterator()
: current(nullptr)
{

}

template<typename T>
Node_Iterator<T>::Node_Iterator(Node<T>* node)
: current(node)
{

}

template<typename T>
Node_Iterator<T>& Node_Iterator<T>::operator++() {
    current = current->next;
    return *this;
}

template<typename T>
Node_Iterator<T> Node_Iterator<T>::operator++(int)
{
    Node_Iterator<T>* node_Iterator;
    node_Iterator->current = current;
    current = current->next;
    Node<T> temp;
    temp = current -> next;
    return *node_Iterator;
}

template<typename T>
Node_Iterator<T> &Node_Iterator<T>::operator--()
{
    current = current -> prev;
    return *this;
}

template<typename T>
Node_Iterator<T> Node_Iterator<T>::operator--(int)
{
    Node_Iterator<T> node_Iterator;
    node_Iterator -> current = current;
    current = current -> prev;
    return node_Iterator;
}

template<typename T>
T &Node_Iterator<T>::operator*()
{
    return current->data;
}

template<typename T>
const T &Node_Iterator<T>::operator*(int) const
{
    return current -> data;
}

template<typename T>
bool Node_Iterator<T>::operator!=(const Node_Iterator<T> &a) const
{
    return current != a.current;
}

template<typename S>
Node_Iterator<S> &operator+=(Node_Iterator<S> &iter, const S &value)
{
    return (iter.current += value);
}

template<typename S>
Node_Iterator<S> &operator-=(Node_Iterator<S> &iter, const S &value)
{
    return (iter.current -= value);
}

template<typename S>
Node_Iterator<S> &operator+(Node_Iterator<S> &iter, const S &value)
{
    return (iter.current + value);
}

#endif