/* Wap to input the radius of the circle and calculate the area 
and perimeter of the circle */
#include <stdio.h>
int main ()
{
    float radius,area,perimeter;
    printf ("Enter the radius of the circle\n");
    scanf ("%f",&radius);
    area = 3.14* radius*radius;
    perimeter = 2*3.14*radius;
    printf ("The area of the circle is %0.2f\n",area);
    printf ("The perimeter of the circle is %.2f\n",perimeter);
    return 0;
}