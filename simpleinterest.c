/*Write a program'to accept the principal, rate, and 
number of years and find out the simple interest */
#include <stdio.h>
int main ()
{
    int p, t , r;
    float si;
    printf ("Enter the principal \n");
    scanf ("%d",&p);
    printf ("Enter the number of years \n");
    scanf ("%d",&t);
    printf ("Enter the rate\n");
    scanf ("%d",&r);
    si = p*t*r/100;
    printf ("The simple Interest is %.2f\n", si);
    return 0;
}