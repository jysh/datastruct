/*
 * =========================================================================
 *
 *       Filename:  quicksort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-04-18 17:06:08
 *  Last Modified:  2014-04-18 17:06:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stdio.h>

int partion(int *a, int l, int r)
{
    int i = l, j = r-1;
    int temp;
    while(1)
    {
        while(a[i] < a[r]) 
            i++;
        while(a[j] > a[r])
        {
            j--;
            if(j<=i)
                break;
        }
        if(j<=i)
            break;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    temp = a[r];
    a[r] = a[i];
    a[i] = temp;
    return i;
}


int partion2(int *a, int l, int r)
{
    int i=l-1, j=r;
    int temp;
    while(1)
    {
        while(a[++i] < a[r]);
        while(a[--j] > a[r])
        {
            if(j<=i)
                break;
        }
        if(j<=i)
            break;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    temp = a[r];
    a[r] = a[i];
    a[i] = temp;
    return i;
}
void quicksort(int *a, int l, int r)
{
    if(l >= r)
        return;
    int i = partion(a, l, r);
   // printf("%d\n",i);
    quicksort(a, l, i-1);
    quicksort(a, i+1, r);
}

int main()
{
    int a[] = {9,8,7,6,5,4,3,2,1,10};
    quicksort(a, 0, 9);
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
