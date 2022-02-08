//Wap to input the temperature in Celsius and convert that into Fahrenheit.
#include <stdio.h>
int main ()
{
    float c ,fah;
    printf ("Enter the temperature in Celsius\n");
    scanf ("%f",&c);
    fah= (c*9/5)+32;
    printf ("The temperature in Fahrenheight  is %0.2f\n",fah);
    return 0 ;
}