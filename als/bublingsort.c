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

void bublingsort(int *a, int len)
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

int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    bublingsort(a, 10);
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
