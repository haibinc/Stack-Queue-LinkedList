//
// Created by Haibin Cao on 2/23/23.
//
#ifndef SPRING_CS008LINKEDLIST_QUEUE_CPP
#define SPRING_CS008LINKEDLIST_QUEUE_CPP
#include "Queue.h"

template<typename T>
T &Queue<T>::front() {
    return list.front();
}

template<typename T>
int Queue<T>::seek(const int& n)
{

}

template<typename T>
void Queue<T>::pop()
{
    list.pop_back();
}

template<typename T>
void Queue<T>::push(const T &item)
{
    list.push_back(item);
}

template<typename T>
bool Queue<T>::empty() {
    return list.empty();
}

template<typename T>
int Queue<T>::size() {
    return list.size();
}

template<typename S>
std::ostream &operator<<(std::ostream &out, const Queue<S> &queue) {
    out << queue.list;
    return out;
}

template<typename T>
Queue<T> &Queue<T>::operator=(const Queue &queue){
    this->list = queue.list;
    return *this;
}

#endif