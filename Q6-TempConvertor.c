/*
 * Program Description:
 * This program converts a temperature in Fahrenheit to Celsius.
 */

 #include <stdio.h>

 int main() {
     float fahrenheit, celsius;
 
     // Get input from user
     printf("Enter a temperature in degrees Fahrenheit: ");
     scanf("%f", &fahrenheit);
 
     // Conversion formula
     celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
 
     // Output result
     printf("Temperature in Celsius: %.2f°C\n", celsius);
 
     return 0;
 }
 