/*
 * =========================================================================
 *
 *       Filename:  insertsort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-04-18 14:35:31
 *  Last Modified:  2014-04-18 14:35:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stdio.h>

void insertsort(int *a, int len)
{
    int i,j;
    int temp,min;
    for(i=0; i<len-1; i++)
    {
        min = i+1;
        j = i;
        while(j >= 0)
        {
            if(a[min] > a[j])
                break; 
            temp = a[j];
            a[j] = a[min];
            a[min] = temp;
            min = j;
            j--;
        }
    }
}

void insertsort2(int *a, int len)
{
    int i, j;
    int temp;
    for(i=1; i<len; i++)
    {
        for(j=i-1; j>=0; j--)
        {
            if(a[j] < a[j+1])
                break;
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}

int main()
{
    int a[] = {9,8,7,6,5,4,3,2,10,1};
    insertsort2(a, 10);
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
