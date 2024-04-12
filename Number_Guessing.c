#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    int number, guess, totalguess = 1;

    srand(time(0));
    number = rand() % 100 + 1;

    // Generates a random number between 1 to 100
    // printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed

    system("cls");

    do
    {
        printf("\n\nGuess the number between 1 to 100 \n", guess);
        scanf("%d", &guess);

        if (guess > number)
            printf("Lower number please!\n");

        else if (guess < number)
            printf("Higher number please!\n");

        else
            printf("\n\nYou guessed in %d attempts\n\n\n\n\n\n", totalguess);
           
        totalguess++;

    } while (number != guess);

    return 0;
}