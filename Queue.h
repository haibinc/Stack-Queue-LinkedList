//
// Created by Haibin Cao on 2/23/23.
//

#ifndef SPRING_CS008LINKEDLIST_QUEUE_H
#define SPRING_CS008LINKEDLIST_QUEUE_H
#include "LinkedList.h"
#include "Node_Iterator.h"

template <typename T>
class Queue
{
private:
    LinkedList<T> list;
    Node_Iterator<T> node_Iterator;
public:
    T& front();
    int seek(const int& n);
    void pop();
    void push(const T& item);
    bool empty();
    int size();
    Queue<T>& operator=(const Queue& queue);
    template <typename S>
    friend std::ostream& operator<<(std::ostream& out, const Queue<S>& queue);
};

#include "Queue.cpp"
#endif //SPRING_CS008LINKEDLIST_QUEUE_H
