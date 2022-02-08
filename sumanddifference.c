/*Accept any two numbers, if the first number is greater than 
second then print the sum of these
two numbers, otherwise print their difference.
 Write this program using ternary operator. */
 #include <stdio.h>
 int main ()
 {
     int num1, num2;
     int  sum , difference;
     printf ("Enter the first number \n");
     scanf ("%d",&num1);
     printf ("Enter the second number \n");
     scanf ("%d",&num2);
     if (num1 > num2?sum  : difference)
     {
         sum = num1+num2;
     printf ("The sum  of %d and %d is %d\n", num1,num2,sum);
     }
     else
     {
     difference = num2- num1;
     printf ("The difference of %d and %d is %d\n",num1, num2,difference);
     }
    return 0;
 }