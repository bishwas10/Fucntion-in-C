/* Write a program to find the transpose of the matrix */
#include <stdio.h>
int main ()
{
    int A [2][3], i, j;
    printf ("Enter the elements of Matrix\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf ("%d", &A[i][j]);
        }
    }
    printf ("The elements of Matrix are\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf ("%d\t ", A[i][j]);
        }
        printf ("\n");
    }
    printf ("The Transpose of Matrix is \n");
     for ( i = 0; i <3; i++)
     {
         for ( j = 0; j < 2; j++)
         {
             printf ("%d\t", A[j][i]);
         }
         printf ("\n");
     }
}