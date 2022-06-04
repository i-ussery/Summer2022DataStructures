
#include "Sequence.h"
#include <optional>
#include <string>
#include <sstream>
// !!!Do not use the following line!!!.
//using namespace std;
// This is a horrible practice and leads to invisible side effects.
// Instead, use the scope resolution operator :: to prefix std to the method.
// ex. std::cout

template <class T>
Sequence<T>::Sequence ()
{
    head = NULL;
    size = 0;
}

template <class T>
Sequence<T>::~Sequence ()
{
    reclaimAllNodes(head);
}

template <class T>
void Sequence<T>::clear ()
{
    if (size = 0)
    {
        head = NULL;
    }
    else
    {
        reclaimAllNodes(head);
        head = NULL;
        size = 0;
    }
}

template <class T>
void Sequence<T>::reclaimAllNodes (NodeRecord*& initialP)
{
    if (initialP != NULL) {
        reclaimAllNodes(initialP->next);
        delete (initialP);
    }
}

template<class T>
void Sequence<T>::add(T &x, int pos)
{
    if (head == NULL)
    {
        head = new NodeRecord();
        head->value = x;
        head->next = NULL;
        size++;
    }
    else {
        int i = 0;
        NodeRecord *currentValue = head;
        NodeRecord *temp = new NodeRecord();
        temp->value = x;
        if (pos + 1 > size) pos = size;
        while (i < pos - 1) {
            currentValue = currentValue->next;
            i++;
        }
        if (currentValue != NULL)
        {
            temp->next = currentValue->next;
            currentValue->next = temp;
        }
        else
        {
            currentValue = temp;
        }
        size++;
    }
}

template<class T>
void Sequence<T>::remove(T &x, int pos)
{
    if (size == 1 && pos == 0)
    {
        if (head->value == x)
        {
            clear();
        }
    }
    else if (pos == 0 && head->value == x)
    {
        head = head->next;
        size--;
    }
    else
    {
        int i = 0;
        NodeRecord* currentValue = head;
        while (i < pos - 1)
        {
            currentValue = currentValue->next;
            i++;
        }
        if (i + 2 == size && currentValue->next->value == x)
        {
            currentValue->next = NULL;
            size--;
        }
        else if (currentValue->next->value == x)
        {
            currentValue->next = currentValue->next->next;
            size--;
        }
    }
}

template<class T>
std::optional<T> Sequence<T>::entry(int pos)  {
    NodeRecord* currentValue = head;
    if (pos >= size || size == 0 || pos < 0) {
        return std::nullopt;
    }
    else
    {
        int i = 0;
        while (i != pos)
        {
            currentValue = currentValue->next;
            i++;
        }
        return currentValue->value;
    }
    //You will need to create the else condition for when the position is within the NodeRecord.
    //You will need to replace the return here.
}

template<class T>
int Sequence<T>::length() {
    return size;
}

template<class T>
std::string Sequence<T>::outputSequence() {
    std::stringstream ss;
    int i = 0;
    NodeRecord* currentValue = head;
    while (i != size)
    {
        ss << currentValue->value;
        if (i != size - 1)
        {
            ss << ", ";
        }
        currentValue = currentValue->next;
        i++;
    }
    //Use insertion operator (<<) to build the string.
    return ss.str();
}

