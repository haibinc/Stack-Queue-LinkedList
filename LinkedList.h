//
// Created by Haibin Cao on 2/1/23.
//

#ifndef SPRING_CS008LINKEDLIST_LINKEDLIST_H
#define SPRING_CS008LINKEDLIST_LINKEDLIST_H
#include <iostream>
#include "Node.h"
#include "Node_Iterator.h"

template<typename T>
class LinkedList
{
private:
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    //creates a node in dynamic memory and turns its address
    Node<T>* createNode(T data, Node<T>* next = nullptr, Node<T>* previous = nullptr);
    //returns address of a node containing item
    Node<T>*& find(T item);
    //removes the target node passed to it
    void remove(Node<T>* node);
    //adds the new node before the target node
    void insertBefore(Node<T>* newNode, Node<T>* targetNode);
    //adds the new node after the target node
    void insertAfter(Node<T>* newNode, Node<T>* targetNode);
    //adds the first node to the list
    void addFirstNode(T data);
public:
    typedef Node_Iterator<T> iterator;
    LinkedList();
    LinkedList(T data);
    LinkedList(const LinkedList<T>& list);
    ~LinkedList();
    //adds an item to the end of the list
    void push_back(const T& item);
    //adds an item to the front of the list
    void push_front(const T& item);
    //removes last item
    void pop_back();
    //removes first item
    void pop_front();
    //returns last item and allows modification
    T& back();
    //returns first item and allows modification
    T& front();
    //returns number of item in the list
    int size() const;
    //returns true if list has items, else false
    bool empty() const;
    //insert the given item before a node containing the target item
    void insertBefore(const T& item, const T& targetItem);
    //insert the given item after a node containing the target item
    void insertAfter(const T& item, const T& targetItem);
    //removes the first instance of the item
    void remove(T item);
    LinkedList<T>::iterator begin();
    LinkedList<T>::iterator end();
    LinkedList<T>& operator=(const LinkedList<T>& list1);
    template<typename S>
    friend std::ostream& operator<<(std::ostream& out, const LinkedList<S>& list);
};

#include "LinkedList.cpp"

#endif //SPRING_CS008LINKEDLIST_LINKEDLIST_H
