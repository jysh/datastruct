/*
 * =========================================================================
 *
 *       Filename:  teststack.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-03-19 16:10:43
 *  Last Modified:  2014-03-19 16:10:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stack.h>
#include <stdlib.h>

struct node{
    int item;
};

int main()
{
    Stack<node> s;
    node *n = new node();
    n->item = 1;
    s.push(*n);
    return 0;
}
