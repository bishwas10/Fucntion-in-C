/*Ramesh basic salary is input through the keyboard. 
His dearness allowance 
is 40% of basic salary, and house rent allowance is 20% of basic salary. 
Write a program to calculate his gross salary*/
#include <stdio.h>
int main ()
{
    float basic_salary,allow,house_rent,gross_salary;
    printf ("Input Ramesh Basic Salary \n");
    scanf ("%f",&basic_salary);
    printf ("Input Dearness Allowance\n");
    scanf ("%f",&allow);
    printf ("Input House Rent\n");
    scanf ("%f",&house_rent);
    gross_salary = basic_salary+0.4*basic_salary+0.2*house_rent;
    printf ("His gross salary is %.2f",gross_salary);
    return 0;
}