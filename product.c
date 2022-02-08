/* Write a C program that accepts two integers from the user and calculate the product of the two integers. Go to the editor
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375*/#include <stdio.h>
int main ()
{
    int num1, num2,product;
    printf ("Input the first integer:\n");
    scanf ("%d",&num1);
    printf ("Input the second integer:\n");
    scanf ("%d",&num2);
    product = num1*num2;
    printf ("product of the above two integers = %d\n",product);
    return 0;
}
