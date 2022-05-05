/*WAp to add two numbers by using function with no return type and with
no arguments */
#include <stdio.h>
void add ();
int main ()
{
    add ();
    return 0;
}
void add ()
{
    int num1 , num2, sum;
    printf ("Enter a first number \n");
    scanf ("%d",&num1);
    printf ("Enter a second number \n");
    scanf ("%d",&num2);
    sum = num1+num2;
    printf ("The addition of %d and %d is %d", num1, num2, sum);
}
