#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int main (void) {
    // TODO: Put any setup code here
    srand(time(NULL));  
    int right = rand() % 100;
    //print the setting
    printf("Welcome to the wolrd of jigsaw.\n");
    printf("Pick a number from 1 - 100. \n");
    printf("Guess the correct number in five go.\n");
    printf("Or you won't be watching the sunrise tmr.\n");
    //game starts
    int guess = 1;
    while(guess < 5) {
         int num;
        printf("Please enter your guess: "); 
        scanf("%d", &num);
        if (0 < num && num < right) {
            printf ("Too small muahahaha.\n");
        } else if (right < num && num < 100) {
            printf ("Too big muahahaha.\n");
        } else if (num == right) {
            printf ("Correct! You can now leave here.\n");
            return 1;
        } else {
            printf ("Please enter a number between 0 and 100.\n");
        }
        guess = guess + 1;
    }
    if (guess == 5) {
        printf("You have used up all your chances. DIE.\n");
    }

   return 0;
}
