/* WAP to find the largest number entered by the user in an array */
#include <stdio.h>
int main ()
{
    int A[10],i, greatest,n;
    printf ("Enter the number of terms\n");
    scanf ("%d",&n);
    printf ("Enter %d terms \n",n);
    {
        for ( i = 0; i <n;i++)
        {
            scanf ("%d ", &A[i]);
        }
    }
    greatest = A[0];
    for ( i = 0; i <n;i++)
    {
        if ( A[i]> greatest)
        {
            greatest = A[i];
        }
    }
    printf ("The greatest element is %d", greatest);
}