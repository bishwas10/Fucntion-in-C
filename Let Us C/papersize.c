/*Paper of size A0 has dimensions 1189 mm*841 mm. Each subsequent 
size A(n) is defined as A(n-1) cut in half parralel to its shorter 
sides.Thus paper of size A1 would have dimension 841 mm * 594 mm. WAP
to calculate and print paper sizes  A0, A1,A2.....A8 */
#include <stdio.h>
int main ()
{
    int A0ht,A0wd;
    int A1ht,A1wd,A2ht,A2wd;
    int A3ht,A3wd,A4ht,A4wd;
    int A5ht,A5wd,A6ht,A6wd;
    int A7ht,A7wd,A8ht,A8wd; 
    A0ht = 1189;
    A0wd = 841;
    printf ("Size of A0 peper Height = %d Widhth = %d\n",A0ht,A0wd);
    A1ht = A0wd;
    A1wd = A0ht/2;
    printf ("Size of A0 peper Height = %d Widhth = %d\n",A1ht,A1wd);
    A2ht = A1wd;
    A2wd = A1ht/2;
    printf ("Size of A0 peper Height = %d Widhth = %d\n",A2ht,A2wd);
    A3ht = A2wd;
    A3wd = A2ht/2;
    printf ("Size of A0 peper Height = %d Widhth = %d\n",A3ht,A3wd);
    A4ht = A3wd;
    A4wd = A3ht/2;
    printf ("Size of A0 peper Height = %d Widhth = %d\n",A4ht,A4wd);
    A5ht = A4wd;
    A5wd = A4ht/2;
    printf ("Size of A0 peper Height = %d Widhth = %d\n",A5ht,A5wd);
    A6ht = A5wd;
    A6wd = A5ht/2;
    printf ("Size of A0 peper Height = %d Widhth = %d\n",A6ht,A6wd);
    A7ht = A6wd;
    A7wd = A6ht/2;
    printf ("Size of A0 peper Height = %d Widhth = %d\n",A7ht,A7wd);
    A8ht = A7wd;
    A8wd = A7ht/2;
    printf ("Size of A0 peper Height = %d Widhth = %d\n",A8ht,A8wd);
    return 0;
}