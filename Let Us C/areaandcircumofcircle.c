/*The length and breadth of a rectangle and radius of a circle are
input through the keyboard. WAP to calculate trhe area and perimeter 
of the rectangle, and the area and circumferance of the circle. */
#include <stdio.h>
#define PI 3.14
int main ()
{
    int l, b,r,area,perimeter;
    float radius,area_of_circle,perimeter_of_circle;
    printf ("Enter the length of the rectangle\n");
    scanf ("%d",&l);
    printf ("Enter the breadth of the rectangle\n");
    scanf ("%d",&b);
    printf ("Enter the radius of the circle\n");
    scanf ("%f",&radius);
    area = l*b;
    perimeter =2*(l+b);
    area_of_circle = PI * radius*radius;
    perimeter_of_circle = 2*PI*radius;
    printf ("The area of the rectangle is %d\n",area);
    printf ("The perimeter of the rectangle is %d\n",perimeter);
    printf ("The area of the circle is %.2f\n",area_of_circle);
    printf ("The perimeter of the circle is %.2f\n",perimeter_of_circle);
    return 0;
}
