/*
 * Program Description:
 * This program calculates the number of heartbeats a person has had in their lifetime.
 * It assumes an average rate of 75 beats per minute.
 */

 #include <stdio.h>

 int main() {
     int age;
     long total_beats;
 
     // Get user's age
     printf("Enter your age in years: ");
     scanf("%d", &age);
 
     // Calculate total heartbeats: 75 bpm * 60 min * 24 hr * 365 days * age
     total_beats = 75L * 60 * 24 * 365 * age;
 
     printf("Your heart has beaten approximately %ld times in your life.\n", total_beats);
 
     return 0;
 }
 