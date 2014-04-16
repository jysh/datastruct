/*
 * =========================================================================
 *
 *       Filename:  stack.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-03-19 15:52:44
 *  Last Modified:  2014-03-19 15:52:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stack.h>

template<typename T>
Stack<T>::Stack()
{
    int stop = -1;
    s = new T[STACKSIZE];
}

template<typename T>
Stack<T>::~Stack()
{
    delete []s;
}

template<typename T>
int Stack<T>::push(const T &node)
{
    if(top == STACKSIZE -1)
    {
        cout<<"The stack is full!"<<endl;
        return -1;
    }
    stop++;
    s[stop] = node;
  //  cout<<s[top]->item<<endl;
    return 0;
}

template<typename T>
int Stack<T>::pop()
{
    if(isempty())
    {
        cout<<"The stack is empty!"<<endl;
        return -1;
    }
    delete s[stop];
    stop--;
    return 0;
}

template<typename T>
T* Stack<T>::top()
{
    if(isempty())
    {
        cout<<"The stack is empty!"<<endl;
        return NULL;
    }
    T *node = s[stop];
    return node;
}

template<typename T>
bool Stack<T>::isempty()
{
    if(stop < 0)
    {
        return true;
    }
    return false;
}


