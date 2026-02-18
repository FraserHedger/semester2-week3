
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Fraser Hedger   
 * ID:201919103
 */

 int main( void ) {



    // define and initialise variables for the problem data 
    float salary = 36250.00;
    float NIrate = 0.08;
    float TAXrate = 0.1;

    float NIcontribution = salary * NIrate;
    float remaining = salary - NIcontribution;
    float taxcontribution = remaining * TAXrate;
    float takehomepay = remaining - taxcontribution;


   
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NIcontribution);
    printf("Tax contribution £%.2f\n", taxcontribution);
    printf("Take home salary £%.2f\n", takehomepay);

    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

    return 0;
 }