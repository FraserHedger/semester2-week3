#include <stdio.h>
/*
 * Portfolio submission
 * Name: Fraser Hedger
 * ID: 201919103
 */
int main( void ) {

    // Define and initialise variables for the problem data
    float salary = 36250.00;
    float NIrate = 0.08;   // 8% National Insurance rate
    float TAXrate = 0.15;  // 15% Tax rate

    // Calculate the deductions and final take-home salary
    float NIcontribution = salary * NIrate;
    float remaining = (salary - NIcontribution) - 12500; // taxable amount above threshold
    float taxcontribution = remaining * TAXrate;
    float takehomepay = salary - NIcontribution - taxcontribution;

    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NIcontribution);
    printf("Tax contribution £%.2f\n", taxcontribution);
    printf("Take home salary £%.2f\n", takehomepay);

    return 0;
}


