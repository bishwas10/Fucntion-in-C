//Wap to input a decimal number and convert to octal number //
#include <stdio.h>
int main ()
{
    int num, rem = 0, place = 1,octal = 0;
    printf ("Enter a decimal number \n");
    scanf ("%d", &num);
    while (num)
    {
        rem = num %8;
        octal = octal+rem *place;
        num = num/8;
        place = place *10;

    }
    printf ("The octal number equivalent to this decimal is %d\n",octal);
    return 0;
}
