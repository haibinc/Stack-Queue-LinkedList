#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

int main() {
    LinkedList<int> list;
    LinkedList<int>::iterator list_Iterator(list.begin());

    list.push_front(2); // list = 2

    list.push_back(4); // list = 4 2 3

    std::cout << list << std::endl; // prints 4 2 3

    list.insertBefore(6, 2); // list = 4 6 2 3

    std::cout << list << std::endl; // prints 4 6 2 3

    list.insertAfter(7, 6); // list = 4 6 7 2 3

    list.push_front(4);

    std::cout << list << std::endl;// prints 4 6 7 2 3

    for (list_Iterator = list.begin();  list_Iterator != list.end(); ++list_Iterator)
    {
        std::cout << *list_Iterator;
    }
//    Stack<int> stack1;
//    Stack<int> stack2;
//    stack1.push(5);
//    stack1.push(6);
//    stack2 = stack1;
//    stack1.push(7);
//    stack1.push(9);
//    stack1.push(10);
//    stack2.pop();
//    stack1.pop();
//    std::cout << "stack 1 seek 3: " << stack1.seek(3) << std::endl;
//    std::cout << "stack 1: " << stack1 << std::endl;
//    std::cout << "stack 2: " << stack2 << std::endl;
//
//    Queue<int> queue1;
//    Queue<int> queue2;
//    queue1.push(15);
//    queue1.push(20);
//    queue2.push(5);
//    std::cout << "queue 2: " << queue2 << std::endl;
//    queue2 = queue1;
//    queue1.push(25);
//    std::cout << "queue 1: " << queue1 << std::endl;
//    std::cout << "queue 2: " << queue2 << std::endl;
    return 0;
}
