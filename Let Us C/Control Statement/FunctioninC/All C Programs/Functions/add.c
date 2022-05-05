/*WAP to add two numbers entered by the users by using function and
with return arguments*/
#include <stdio.h>
int add ( int num1, int num2);
int main ()
{
    int num1, num2;
    printf ("Enter a first number \n");
    scanf ("%d",&num1);
    printf ("Enter a second number \n");
    scanf ("%d", &num2);
    printf ("Sum of %d and %d is %d", num1, num2,add (num1, num2));

    return 0;
}
int add ( int num1,  int num2)
{
    return num1+num2;
}