/*
 * =========================================================================
 *
 *       Filename:  mergesort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-04-22 15:18:49
 *  Last Modified:  2014-04-22 15:18:49
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

void mergearray(int *a, int l, int m, int r, int *temp)
{
    int i, j;
    for(i = m+1; i > l; i--)
    {
        temp[i-1] = a[i-1];
    }
    for(j = m; j < r; j++)
    {
        temp[r+m-j] = a[j+1];
    }
    
    int k;
    for(k = l; k <= r; k++)
    {
        if(temp[i] < temp[j])
            a[k] = temp[i++];
        else
            a[k] = temp[j--];
    }
}

void mergesort(int *a, int l, int r, int *temp)
{
    if(l == r)
        return;
    int m = (r + l)/2;
    mergesort(a, l, m, temp);
    mergesort(a, m+1, r, temp);
    mergearray(a, l, m, r, temp);
}

int main()
{
    int a[] = {9,8,7,6,5,4,3,2,1,90,89,78,86,36};
    int *t = (int*)malloc(56);
    mergesort(a, 0, 13, t);
    int i;
    for(i = 0; i < 14; i++)
    {
        printf("%d ", a[i]);
    }
    free(t);
    return 0;
}
