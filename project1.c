#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    printf("Guess the number: \n");
    scanf("%d", &guessed_number);
    do
    {
        if (guessed_number > randomNumber)
        {
            printf("Lower number please!\n");
            scanf("%d", &guessed_number);
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher number please!\n");
            scanf("%d", &guessed_number);
        }
        if (guessed_number == randomNumber)
        {
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}