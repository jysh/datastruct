/*
 * =========================================================================
 *
 *       Filename:  stack.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-03-19 15:31:48
 *  Last Modified:  2014-03-19 15:31:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <iostream>

using namespace std;

#define STACKSIZE 1000
template<typename T>
class Stack {
    public:
        Stack();
        ~Stack();
        int push(const T &node);
        int pop();
        T* top();
        bool isempty();
    private:
        T* s;
        int stop;
};
