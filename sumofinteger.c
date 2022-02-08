/*Write a C program that accepts two integers from the user and 
calculate the sum of the two integers. Go to the editor
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63*/
#include <stdio.h>
int main ()
{
    int num1, num2,sum;
    printf ("Input the first integer:\n");
    scanf ("%d",&num1);
    printf ("Input the second integer:\n");
    scanf ("%d",&num2);
    sum = num1+num2;
    printf ("Sum of the above two integers = %d\n",sum);
    return 0;
}
