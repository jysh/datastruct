/*
 * =========================================================================
 *
 *       Filename:  shellsort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014-04-22 10:36:06
 *  Last Modified:  2014-04-22 10:36:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NDSL (), 
 *        Company:  NDSL UESTC
 *
 * =========================================================================
 */
#include <stdio.h>

void shellsort(int *a, int len)
{
    int incre, i, j;
    int temp;

    for(incre = len/2; incre > 0; incre /= 2)
    {
        for(i = 0; i < len-incre; i += incre)
        {
            for(j = i+incre; j >= incre; j -= incre)
            {
                if(a[j-incre] < a[j])
                    break;
                temp = a[j-incre];
                a[j- incre] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {10,28,17,21,9,8,7,6,5,4,3,2,1};

    shellsort(a, 13);
    int i;
    for(i = 0; i < 13; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
