/*
 * =========================================================================
 *
 *       Filename:  selection.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-04-18 11:46:03
 *  Last Modified:  2014-04-18 11:46:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stdio.h>

void selection(int *a, int len)
{
    int min, temp;
    int i = 0;
    int j;
    while(i < len)
    {
        min = i;
        for(j=i+1; j<len; j++)
        {
            if(a[min] > a[j])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        i++;
    }
}

int main()
{
    int a[] = {9,8,7,6,5,4,11,25,97,3,2,1};
    selection(a, 11);
    int i;
    for(i=0; i<11; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
