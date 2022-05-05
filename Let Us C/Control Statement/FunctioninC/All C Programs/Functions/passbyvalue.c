/* WAP to illustrate the concept of call by value */
#include <stdio.h>
int swap ( int, int);
int main ()
{
    int x = 5;
    int y = 10;
    printf ("Before Swapping the Values \n");
    printf ("Value of X = %d\n", x);
    printf ("Value of Y = %d\n", y);
    swap ( x, y);
    printf ("After Swapping the values \n");
    printf ("Value of X = %d\n ", x);
    printf ("Value of Y = %d\n", y);
    return 0;
}
int swap ( int a , int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}