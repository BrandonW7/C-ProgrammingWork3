/*
 * Program Description:
 * This program reads two integers from the user and performs integer division.
 * It displays the quotient and the remainder in a formatted output.
 */

 #include <stdio.h>

 int main() {
     int num1, num2, quotient, remainder;
 
     // Read input values
     printf("Enter the first number: ");
     scanf("%d", &num1);
     printf("Enter the second number: ");
     scanf("%d", &num2);
 
     // Compute quotient and remainder
     quotient = num1 / num2;
     remainder = num1 % num2;
 
     // Display result in desired format
     printf("      %d Remainder = %d\n", quotient, remainder);
     printf("    _______\n");
     printf("%d ) %d\n", num2, num1);
 
     return 0;
 }
 