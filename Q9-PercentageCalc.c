/*
 * Program Description:
 * This program reads two integers from the user and calculates
 * the percentage of the first number with respect to the second.
 */

 #include <stdio.h>

 int main() {
     int num1, num2;
     float percentage;
 
     // Input two integers
     printf("Enter the first number: ");
     scanf("%d", &num1);
     printf("Enter the second number: ");
     scanf("%d", &num2);
 
     // Calculate percentage
     percentage = ((float)num1 / num2) * 100;
 
     // Display result with one decimal place
     printf("%d is %.1f percent of %d\n", num1, percentage, num2);
 
     return 0;
 }
 