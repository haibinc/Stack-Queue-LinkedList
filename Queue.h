//
// Created by Haibin Cao on 2/23/23.
//

#ifndef SPRING_CS008LINKEDLIST_QUEUE_H
#define SPRING_CS008LINKEDLIST_QUEUE_H
#include "LinkedList.h"
template <typename T>
class Queue : public LinkedList<T>
{
public:
    T& front();
    void seek();
    void pop();
    void push(T& item);
    bool empty();
    int size();
    Queue<T>& operator=(const Queue& queue);
};


#endif //SPRING_CS008LINKEDLIST_QUEUE_H
