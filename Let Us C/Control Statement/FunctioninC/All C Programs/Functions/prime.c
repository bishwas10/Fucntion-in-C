/* Write a program using function whether it is a prime or not */
#include <stdio.h>
void isprime ( int n);
int main ()
{
    int num;
    printf ("Enter a number \n");
    scanf ("%d", &num);
    isprime (num);
    return 0;
}
void isprime (int n)
{
    int i, count =0;
    for ( i = 1 ; i <=n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if ( count ==2)
    {
        printf ("It is a prime number \n");
    }
    else
    {
        printf ("It is a composite number \n");
    }
}