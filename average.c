/*Write a C program that accepts two item’s weight 
(floating points' values ) and number of purchase 
(floating points' values) and 
calculate the average value of the items. Go to the editor
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444 */
#include <stdio.h>
int main ()
{
    int item1, item2,no_of_item1,no_of_item2;
    float average;
    printf ("Weight -Item1 :\n");
    scanf ("%d",&item1);
    printf ("No. of item1:\n");
    scanf ("%d",&no_of_item1);
     printf ("Weight -Item1 :\n");
    scanf ("%d",&item2);
    printf ("No. of item2:\n");
    scanf ("%d",&no_of_item2);
    average = (item1*no_of_item1)+ (item2*no_of_item2)/2;
    printf ("Average Value = %f\n",average);

    return 0;
}