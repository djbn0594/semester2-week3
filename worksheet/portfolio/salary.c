
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Samuel Randles
 * ID: 201933992
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float NI = 0.08;
   float tax = 0.15;

    // calculate the deductions and final take-home salary
   float NIcont = salary * NI;
   float taxcont = (salary - NIcont) * tax;
   float takehome = salary - NIcont - taxcont;
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f",salary);
    printf("NI contribution £%.2f",NIcont);
    printf("Tax contribution £%.2f",taxcont);
    printf("Take home salary £%.2f",takehome);

    return 0;
 }