/*Accept any five digit number and print the value of remainder 
after dividing by 3. */
#include <stdio.h>
int main ()
{
    int num, rem;
    printf ("Enter the 5 digit number (less than 32767)\n");
    scanf ("%d",&num);
    rem = num %3;
    printf ("The value of remainder after dividing by 3 is %d\n",rem );
    return 0;
}