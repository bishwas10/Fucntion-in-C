/*WAp to add two numbers by using function with no return type and with
arguments */
#include <stdio.h>
void add (int num1, int num2);
int main ()
{
    int num1 , num2;
    printf ("Enter a first number \n");
    scanf ("%d",&num1);
    printf ("Enter a second number \n");
    scanf ("%d", &num2);
    add (num1, num2);
    
   
    return 0;
}
void add (int num1 , int  num2)
{
    int sum;
    sum = num1+num2;
    printf ("Sum of two numbers is %d", sum);
    
}