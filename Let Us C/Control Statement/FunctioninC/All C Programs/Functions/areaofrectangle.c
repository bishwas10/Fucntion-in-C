#include <stdio.h>
int area (int length, int breadth);
int perimeter ( int length, int breadth);
int main ()
{
    int l , b;
    printf ("Enter the length of the rectangle\n");
    scanf ("%d", &l);
    printf ("Enter the breadth of the rectangle \n");
    scanf ("%d",&b);
    printf ("The area of the rectangle is %d\n", area (l,b));
    printf ("The perimeter of the rectangle is %d\n", perimeter (l,b));
    return 0;
}
int area ( int length, int breadth)
{
    return length* breadth;
}
int perimeter ( int length, int breadth)
{
    return 2* ( length+breadth);
}