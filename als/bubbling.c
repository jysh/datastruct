/*
 * =========================================================================
 *
 *       Filename:  bublingsort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-04-18 16:03:56
 *  Last Modified:  2014-04-18 16:03:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stdio.h>
typedef _Bool bool;
#define true 1
#define false 0

void bubblingsort1(int *a, int len)
{
    int i,j;
    int temp;
    for(i=0; i<len; i++)
    {
        for(j=0; j<len-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void bubblingsort2(int *a, int len)
{
    bool flag = true;
    int i,k = len;
    int temp;
    while(flag)
    {
        flag = false;
        for(i=1; i<k; i++)
        {
            if(a[i-1] > a[i])
            {
                temp = a[i-1];
                a[i-1] = a[i];
                a[i] = temp;
                flag = true;
            }
        }
        k--;
    }
}

void bubblingsort3(int *a, int len)
{
    int flag = len;
    int i,k,temp;
    while(flag > 0)
    {
        k = flag;
        flag = 0;
        for(i=1; i<k; i++)
        {
            if(a[i-1] > a[i])
            {
                temp = a[i-1];
                a[i-1] = a[i];
                a[i] = temp;
                flag = i;
            }
        }
    }
}

int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    bubblingsort3(a, 10);
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
