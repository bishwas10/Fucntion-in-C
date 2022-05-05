#include <stdio.h>
int main ()
{
    int A[5] = {1,2,3,4,5};
    int i;
    for (i =0 ; i <5;i++ )
    {
        scanf ( "%d ",&A[i]);
    }
    printf ("Elements in an array are \n");
    for ( i =0 ; i <5;i++ )
    {
        printf ("%d",A[i]);
    }
    
    return 0;
}