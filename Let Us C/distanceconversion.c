/*The distance between two cities (in km) is input through the keyboard
.Write a program to convert and print this distance in meters ,feet, inches
and centimeters*/
#include <stdio.h>
int main ()
{
    int km,m,cm;
    float feet, inches;
    printf ("Input the distance between two cities (in km)\n");
    scanf ("%d",&km);
    m = km*1000;
    feet =  km *3280.84; 
    cm =  km *100000 ;
    inches = km *39370.1 ;
    printf ("This %d km in distance in meters is %d\n",km,m);
    printf ("This %d km in distance in feet  is %.3f\n",km,feet);
    printf ("This %d km in distance in cm is %d\n",km,cm);
    printf ("This %d km in distance in inches is %.3f %n",km,inches);
    return 0;
}