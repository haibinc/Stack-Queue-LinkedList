//
// Created by Haibin Cao on 2/1/23.
//
#ifndef SPRING_CS008LINKEDLIST_LINKEDLIST_CPP
#define SPRING_CS008LINKEDLIST_LINKEDLIST_CPP

#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList()
{

}

template<typename T>
LinkedList<T>::LinkedList(T data)
{

}

template<typename T>
Node<T> *LinkedList<T>::createNode(T data, Node<T> *next, Node<T> *previous)
{
    Node<T>* node = new Node<T>;
    node->data = data;
    node->next = next;
    node->previous = previous;
    return node;
}

template<typename T>
Node<T> *&LinkedList<T>::find(T item)
{
    Node<T>* walker = head;
    while(walker->data != item)
    {
        walker = walker->next;
    }
    return walker;
}

template<typename T>
void LinkedList<T>::remove(Node<T> *node)
{
    if(head == node)
    {
        head = head->next;
        head->previous = nullptr;
        delete node;
    }
    else if(tail == node)
    {
        tail = tail->previous;
        tail->next = nullptr;
        delete node;
    }
    else
    {
        Node<T>* walker = head;
        while(walker->next != node)
        {
            walker = walker->next;
        }
        walker->next = node->next;
        (node->next)->previous = walker;
        delete node;
    }
//
//    std::cout << "walker data: " << walker->data << std::endl;
}

template<typename T>
void LinkedList<T>::insertBefore(Node<T> *newNode, Node<T> *targetNode)
{
    if(targetNode != nullptr)
    {
        newNode->next = targetNode;
        if(targetNode->previous != nullptr)
        {
            (targetNode->previous)->next = newNode;
        }
        else
        {
            head = newNode;
        }
        newNode->previous = targetNode->previous;
        targetNode->previous = newNode;
    }
//    std::cout << "head's data: " << head->data << std::endl;
}

template<typename T>
void LinkedList<T>::insertAfter(Node<T> *newNode, Node<T> *targetNode)
{
    if(targetNode != nullptr)
    {
        newNode->next = targetNode->next;
        newNode->previous = targetNode;
        if(targetNode->next != nullptr)
        {
            (targetNode->next)->previous = newNode;
        }
        else
        {
            tail = newNode;
        }
        targetNode->next = newNode;
    }
//    std::cout << "tail's data: " << tail->data << std::endl;
//    std::cout << "tail's previous: " << tail->data << std::endl;
//    std::cout << "target node next: " << (targetNode->next)->data << std::endl;

}

template<typename T>
void LinkedList<T>::addFirstNode(T data)
{
    Node<T>* node = createNode(data);
    head = node;
    tail = node;
    head->previous = nullptr;
    tail->next = nullptr;
}

template<typename T>
void LinkedList<T>::push_back(const T &item)
{
    if(empty())
    {
        addFirstNode(item);
    }
    else
    {
        Node<T>* node = createNode(item);
        insertAfter(node, find(back()));
    }
}

template<typename T>
void LinkedList<T>::push_front(const T &item)
{
    if(empty())
    {
        addFirstNode(item);
    }
    else
    {
        Node<T>* node = createNode(item);
        insertBefore(node, find(front()));
    }
}

template<typename T>
void LinkedList<T>::pop_back()
{
    remove(find(back()));
}

template<typename T>
void LinkedList<T>::pop_front()
{
    remove(find(front()));
}

template<typename T>
T &LinkedList<T>::back()
{
    Node<T>* walker = head;
    while(walker->next != nullptr)
    {
        walker = walker->next;
    }
//    std::cout << "last item: " << walker->data << std::endl;
    return walker->data;
}

template<typename T>
T &LinkedList<T>::front()
{
    return head->data;
}

template<typename T>
int LinkedList<T>::size() const
{
    Node<T>* walker = head;
    int size = 0;
    while(walker != nullptr)
    {
        walker = walker->next;
        size++;
    }
    return size;
}

template<typename T>
bool LinkedList<T>::empty() const
{
    return (size() == 0);
}

template<typename T>
void LinkedList<T>::insertBefore(const T &item, const T &targetItem)
{
    insertBefore(createNode(item), find(targetItem));
}

template<typename T>
void LinkedList<T>::insertAfter(const T &item, const T &targetItem)
{
    insertAfter(createNode(item), find(targetItem));
}

template<typename T>
void LinkedList<T>::remove(T item)
{
    remove(find(item));
}

template<typename T>
typename LinkedList<T>::iterator LinkedList<T>::begin()
{
    return iterator(head);
}

template<typename T>
typename LinkedList<T>::iterator LinkedList<T>::end()
{
    return iterator(tail->next);
}

template<typename T>
LinkedList<T> &LinkedList<T>::operator=(const LinkedList<T> &list1)
{
    this->~LinkedList();
    Node<T>* walker = list1.head;
    while(walker != nullptr)
    {
        push_back(walker->data);
        walker = walker->next;
    }
    return *this;
}

template<typename S>
std::ostream &operator<<(std::ostream &out, const LinkedList<S> &list)
{
    Node<S>* walker = list.head;
    while(walker != nullptr)
    {
        out << walker->data << " ";
        walker = walker->next;
    }
    return out;
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &list)
{
    *this = list;
    std::cout << "Copy constructor is called" << std::endl;
}

template<typename T>
LinkedList<T>::~LinkedList()
{
    Node<T>* walker = head;
    while(walker != nullptr)
    {
        Node<T>* temp = walker->next;
        delete walker;
        walker = temp;
    }
    head = nullptr;
    tail = nullptr;
}

#endif