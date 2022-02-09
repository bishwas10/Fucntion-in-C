/*If the marks obtained by a student in five different subjects are
input through the keyboard , WAP to find out the aggregate marks and percentage
markss obtained by the student.
Assumme that the maximum marks that can be obtained by a student in each subject
is 100 */
#include <stdio.h>
int main ()
{
    int m1,m2,m3,m4,m5, total;
    float aggregrate,percentage;
    printf ("Enter the marks in English \n");
    scanf ("%d",&m1);
    printf ("Enter the marks in Computer \n");
    scanf ("%d",&m2);
    printf ("Enter the marks in Maths \n");
    scanf ("%d",&m3);
    printf ("Enter the marks in Nepali \n");
    scanf ("%d",&m4);
    printf ("Enter the marks in Social \n");
    scanf ("%d",&m5);
    total = m1+m2+m3+m4+m5;
    aggregrate = total /5;
    percentage = total/5;
    printf ("Aggregate Marks = %.2f\n",aggregrate);
    printf ("Percenatage = %.2f% \n",percentage);
    return 0;
}