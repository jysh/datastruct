/*
 * =========================================================================
 *
 *       Filename:  heapsort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-04-23 11:15:13
 *  Last Modified:  2014-04-23 11:15:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stdio.h>

const int MAXLEN = 1000;

void heapdownmin(int *a, int i, int n)
{
    int j, temp;
    j = 2*i+1;
    temp = a[i];
    if(j < n)
    {
        if((j+1 < n) && (a[j] > a[j+1]))
            j++;
        if(a[j] < temp)
        {
            a[i] = a[j];
            a[j] = temp;
            heapdownmin(a, j, n);
        } 
    }
}

void heapdownmax(int *a, int i, int n)
{
    int j, temp;
    j = 2*i+1;
    temp = a[i];
    if(j < n)
    {
        if((j+1 < n) && (a[j] < a[j+1]))
            j++;
        if(a[j] > temp)
        {
            a[i] = a[j];
            a[j] = temp;
            heapdownmax(a, j, n);
        }
    }
}

void buildmaxheap(int *a, int n)
{
    int i;
    for(i = n/2-1; i >= 0; i--)
    {
        heapdownmax(a, i, n);
    }
}

void buildminheap(int *a, int n)
{
    int i;
    for(i = n/2-1; i>=0; i--)
    {
        heapdownmin(a, i, n);
    }
}

void ascheapsort(int *a, int n)
{
    int temp, i;
    i = n-1;
    while(i >= 0)
    {
        temp = a[i];
        a[i] = a[0];
        a[0] = temp;
        heapdownmax(a, 0, i);
        i--;
    }
}

void desheapsort(int *a, int n)
{
    int temp,i;
    i = n-1;
    while(i>=0)
    {
        temp = a[i];
        a[i] = a[0];
        a[0] = temp;
       heapdownmin(a, 0, i); 
       i--;
    }

}
int main()
{
    int a[] = {9,81,17,69,50,4,3,2,1};
    buildminheap(a, 9);
    int i;
    for(i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
   // desheapsort(a, 9);
    for(i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    buildmaxheap(a, 9);
    for(i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    ascheapsort(a, 9);
    for(i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
