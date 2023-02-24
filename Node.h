//
// Created by Haibin Cao on 2/1/23.
//

#ifndef SPRING_CS008LINKEDLIST_NODE_H
#define SPRING_CS008LINKEDLIST_NODE_H

template<typename T>
struct Node
{
    T data;
    Node<T>* next = nullptr;
    Node<T>* previous = nullptr;
};

#endif //SPRING_CS008LINKEDLIST_NODE_H
