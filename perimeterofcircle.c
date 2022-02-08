 /*Write a C program to compute the perimeter and 
 area of a circle with a given radius. Go to the editor
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches*/
#include <stdio.h>
int main ()
{
    float radius,area,perimeter;
    printf ("Enter the radius of the circle \n");
    scanf ("%f",&radius);
    perimeter = 2*3.14*radius;
    area = 3.14* radius *radius;
    printf ("Perimter of the Circle = %f inches\n",perimeter);
    printf ("Area of the Circle = %f square inches\n",area);
    return 0;
}