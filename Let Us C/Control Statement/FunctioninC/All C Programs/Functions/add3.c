/*WAp to add two numbers by using function with  return type and with
no arguments */
#include <stdio.h>
int add ();
int main ()
{
    printf ("The sum of two number is %d", add ());
    
   
    return 0;
}
int add ()
{
    int num1 , num2, sum;
    printf ("Enter a first number \n");
    scanf ("%d",&num1);
    printf ("Enter a second number \n");
    scanf ("%d",&num2);
    sum = num1+num2;
    return sum;
}