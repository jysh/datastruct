/*
 * =========================================================================
 *
 *       Filename:  swap.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-04-22 14:48:56
 *  Last Modified:  2014-04-22 14:48:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stdio.h>

void swap1(int &a, int &b)
{
    if(a != b)
    {
        a ^= b;
        b ^= a;
        a ^= b;
    }
}

void swap2(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 1, b = 2;
    swap1(a, b);
    printf("a: %d, b: %d\n", a,b);
    return 0;
}
