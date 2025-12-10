/*
 * Program Description:
 * This program converts a temperature in Celsius to Fahrenheit.
 */

 #include <stdio.h>

 int main() {
     float celsius, fahrenheit;
 
     // Get temperature in Celsius
     printf("Enter a temperature in degrees Celsius: ");
     scanf("%f", &celsius);
 
     // Convert to Fahrenheit
     fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
 
     // Output the result
     printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
 
     return 0;
 }
 