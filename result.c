/*Accepts marks in five subject and calculate 
the total percentage marks */
#include <stdio.h>
int main ()
{
    int m1,m2,m3,m4,m5,total;
    float percentage;
    printf ("Enter the marks in Five subjects \n");
    scanf ("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    percentage = total /5;
    printf ("Percentage = %.2f%\n",percentage);
    return 0;
}