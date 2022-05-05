#include <stdio.h>
int main ()
{
    int A[5] = {2,4,8,23,9};
    int i ;
    int max ;
    max = A[0];
    for ( i = 0 ; i <5; i++)
    {
        if ( A[i]> max)
        max = A [i];
    }
    printf ("The largest element in an array is %d", max);
    return 0;
}