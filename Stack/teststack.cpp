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
#include <stdlib.h>
#include "stack.h"
#include "stack.cpp"

struct node{
    int item;
};

int main()
{
    Stack<node*> s;
    struct node *n = new node();
    n->item = 4;
    s.push(n);
    struct node *n1 = s.top();
    cout<<n1->item<<endl;
    return 0;
}
