//
// Created by Haibin Cao on 2/7/23.
//

#ifndef SPRING_CS008LINKEDLIST_NODE_ITERATOR_H
#define SPRING_CS008LINKEDLIST_NODE_ITERATOR_H
#include <iostream>
#include "Node.h"
#include <iterator>

template<typename T>
class Node_Iterator : public std::iterator<std::bidirectional_iterator_tag, T>
{
private:
    Node<T> *current;
public:
    Node_Iterator();
    Node_Iterator(Node<T> *node);
     Node_Iterator<T> & operator++();
    Node_Iterator<T> operator++(int);
    Node_Iterator<T> &operator--();
    Node_Iterator<T> operator--(int);
    bool operator!=(const Node_Iterator<T> &a) const;

public:
    T& operator*();
    const T& operator*(int) const;
    template<typename S>
    friend Node_Iterator<S> &operator+=(Node_Iterator<S> &iter, const S &value);
    template<typename S>
    friend Node_Iterator<S> &operator-=(Node_Iterator<S> &iter, const S &value);
    template<typename S>
    friend Node_Iterator<S> &operator+(Node_Iterator<S> &iter, const S &value);
};

#include "Node_Iterator.cpp"

#endif //SPRING_CS008LINKEDLIST_NODE_ITERATOR_H
