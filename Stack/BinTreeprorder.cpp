/*
 * =========================================================================
 *
 *       Filename:  BinTreeprorder.c
 *
 *    Description:  non-recursion
 *
 *        Version:  1.0
 *        Created:  03/19/2014 03:22:39 PM
 *  Last Modified:  03/19/2014 03:22:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stack.cpp"

typedef struct _BinTree {
	char term;
	_BinTree *lchild;
    _BinTree *rchild;
}BinTree;

void preOrder(BinTree *root)
{
    if(root == NULL)
        return;
    cout<<root->term<<" ";
    preOrder(root->lchild);
    preOrder(root->rchild);
    return;
}

void preOrder2(BinTree *root)
{
    Stack<BinTree*> s;
    BinTree *p = root;
    while((p != NULL) || (!s.isempty()))
    {
        while(p != NULL)
        {
            cout<<p->term<<" ";
            s.push(p);
            p = p->lchild;
        }
        if(!s.isempty())
        {
            p = s.top();
            s.pop();
            p = p->rchild;
        }
    }
}

void inOrder1(BinTree *root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder1(root->lchild);
    cout<<root->term<<" ";
    inOrder1(root->rchild);
    return;
}

void inOrder2(BinTree *root)
{
    
    Stack<BinTree*> s;
    BinTree *p = root;
    while((p != NULL) || (!s.isempty()))
    {
        while(p != NULL)
        {
            s.push(p);
            p = p->lchild;
        }
        if(!s.isempty())
        {
            p = s.top();
            cout<<p->term<<" ";
            s.pop();
            p = p->rchild;
        }
    }
}

void postOrder1(BinTree *root)
{
    if(root == NULL)
        return;
    postOrder1(root->lchild);
    postOrder1(root->rchild);
    cout<<root->term<<" ";
    return;
}

void postOrder2(BinTree *root)
{
    if(root == NULL)
        return;
    Stack<BinTree*> s;
    BinTree *pre = NULL;
    BinTree *cur;
    s.push(root);
    while(!s.isempty())
    {
        cur = s.top();
        if((cur->lchild == NULL)&&(cur->rchild == NULL) ||
                ((pre != NULL)&&((pre == cur->lchild)||(pre == cur->rchild))))
        {
            cout<<cur->term<<" ";
            s.pop();
            pre = cur;
        }
        else
        {
            if(cur->rchild != NULL)
                s.push(cur->rchild);
            if(cur->lchild != NULL)
                s.push(cur->lchild);
        }
    }
    return;
}

int main()
{
    BinTree *root = new BinTree();
    root->term = 'a';
    BinTree *n1 = new BinTree();
    n1->term = 'b';
    BinTree *n2 = new BinTree();
    n2->term = 'c';
    root->lchild = n1;
    root->rchild = n2;
    n1->lchild = NULL;
    n1->rchild = NULL;
    n2->lchild = NULL;
    n2->rchild = NULL;
    preOrder(root);
    cout<<endl;
    preOrder2(root);
    cout<<endl;
    inOrder1(root);
    cout<<endl;
    inOrder2(root);
    cout<<endl;
    postOrder1(root);
    cout<<endl;
    postOrder2(root);
    cout<<endl;
    return 1;
}
