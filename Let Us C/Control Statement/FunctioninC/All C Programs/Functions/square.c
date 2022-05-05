#include <stdio.h>
float square ( float n);
int main ()
{
    float num;
    printf ("Enter a number \n");
    scanf ("%f",&num);
    printf ("The square of the number is %.2f",square(num));
    return 0;
}
float square ( float n)
{
    return n*n;
}