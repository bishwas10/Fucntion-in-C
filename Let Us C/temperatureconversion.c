/* Temperature of a city in Fahrenheit degree is input through the 
keyboard.Wap to convert this temperature into centegrade degree. */
#include <stdio.h>
int main ()
{
   float fahrenheit,centigrade;
   printf ("Input the temperature of a city in Fahrenheit degree \n");
   scanf ("%f",&fahrenheit);
   centigrade = (fahrenheit -32)*5/9;
   printf ("%f fahrenheit into centigrade is %.2f\n",fahrenheit,centigrade);
   return 0;
}
