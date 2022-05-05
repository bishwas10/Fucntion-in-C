#include <stdio.h>
#define N 50
 int main ()
 {
    int A[N][N], B[N][N], C[N][N],i ,j ,k,  sum;
    int m ,n, p,q;
    printf ("Enter the rows and  columns of first matrix\n");
    scanf ("%d %d",&m,&n);
    printf ("Enter the rows and  columns of second matrix\n");
    scanf ("%d %d",&p,&q);
    printf ("Enter the first matrix \n");
    for ( i = 0; i <m; i++)
    {
        for ( j = 0; j <n;j++)
        {
            scanf ("%d",&A[i][j]);
        }
    }
    printf ("The first matrix is \n");
    for ( i = 0; i <m; i++)
    {
        for ( j = 0; j <n;j++)
        {
            printf ("%d ",A[i][j]);
        }
        printf ("\n");
    }

     printf ("Enter the second matrix \n");
    for ( i = 0; i <p; i++)
    {
        for ( j = 0; j <q;j++)
        {
            scanf ("%d",&B[i][j]);
        }
    }
     printf ("The second matrix is \n");
    for ( i = 0; i <p; i++)
    {
        for ( j = 0; j <q;j++)
        {
            printf ("%d ",B[i][j]);
        }
        printf ("\n");
    }
    if ( n!=p)
    {
        printf ( "Sorry ! Matrix cannot be multiply \n");
    }
    else
    {
    for ( i = 0; i <m ; i++)
    {
        for ( j = 0; j < q;j++)
       
        {
            sum = 0;
             for ( k = 0;k <m; k++)
             {
                 sum  = sum + A[i][k] * B [k][j];
             }
             C[i][j] = sum;

        }
    }
    }
    printf ("Multiplication of matrix is \n");
    {
        for (i = 0; i <m;i++)
        {
            for ( j = 0; j <q; j++)
            {
                printf ("%d ", C[i][j]);
            }
            printf ("\n");
        }
    }


    return 0;

 }