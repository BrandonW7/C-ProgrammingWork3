/*
 * Program Description:
 * This program takes three floating-point numbers as input from the user.
 * It then calculates and displays:
 * (a) the sum of the numbers
 * (b) the average of the numbers
 * All results are displayed to three decimal places.
 */

 #include <stdio.h>

 int main() {
     // Variable declarations
     float num1, num2, num3, sum, average;
 
     // Prompt the user for input
     printf("Enter three floating-point numbers: ");
     scanf("%f %f %f", &num1, &num2, &num3);
 
     // Calculate the sum and average
     sum = num1 + num2 + num3;
     average = sum / 3;
 
     // Display results to 3 decimal places
     printf("Sum = %.3f\n", sum);
     printf("Average = %.3f\n", average);
 
     return 0;
 }
 