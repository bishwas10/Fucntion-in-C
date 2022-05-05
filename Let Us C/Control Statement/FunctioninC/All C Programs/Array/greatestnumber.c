/* WAP to print the greates number among 10 numbers entered by the user */
#include <stdio.h>
int main ()
{
    int A[10], i, greatest;
    printf ("Enter the 10 integers\n");
    {
        for ( i =0 ; i <10;i++)
        {
            scanf ("%d\t", &A[i]);
        }
    }
         greatest = A[0];
        for ( i =0 ; i <10;i++)
        {
        if ( A[i]> greatest)
        {
            greatest = A[i];
        }
        }
    
    printf ("The greatest element in an array is %d\n", greatest);
    return 0;
}