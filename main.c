#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for sleep()

int main (void) {
    int diff = 0;
    int tryes = 0;
    int guess;
    int secretnumber = 10;
    double score = 1000;

    printf("Welcome to Guess Game!\n");
    sleep(1);
    printf("The objective is simple.. Guess the secret number!\n");
    printf("What difficult you choose?\n\n");
    printf("1- Easy\n2- Medium\n3- Hard\n");
    printf("Choose a difficult: ");
    scanf("%d", &diff);
    
    switch(diff) {
        case 1:
            tryes = 20;
            printf("Easy mode selected.");
            break;
        case 2:
            tryes = 15;
            printf("Medium mode selected");
            break;
        case 3:
            tryes = 6;
            printf("Hard mode selected");
            break;
        default:
            printf("Unaceptable value.");
    }

    printf("The game is starting...\n");
    sleep(1);

    for (int i = 0; i <= tryes; i++) {
        printf("Score: %.0f\n", score);
        printf("What's your guess?\n");
        scanf("%d", &guess);
        
        if (guess == secretnumber) {
            printf("Congratulations!! You guess the secret number!!\n");
            break;
        }
        if (guess != secretnumber) {
            score = score - (abs(guess - secretnumber));
        }
        else if (guess < secretnumber) {
            printf("Your guess is less than the secret number. \n");
            continue;
        }
        else if (guess > secretnumber) {
            printf("Your guess is greater than the secret number. \n");
        }
    }
}