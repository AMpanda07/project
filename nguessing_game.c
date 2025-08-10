#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int rnum;
    int your_number;
    int nguess;
    char play_again;
    do
    {
        nguess = 0;
        printf("=======================================\n");
        printf("Welcome to random number guesser !!!!!\n");
        printf("Choose a number between 1 and 100\n");
        srand(time(NULL));
        rnum = (rand() % 100) + 1;
        do
        {
            printf("Enter your guess:");
            scanf("%d", &your_number);
            nguess++;
            if (your_number > rnum)
            {
                printf("Choose a smaller number....XXX\n");
            }
            else if (your_number < rnum)
            {
                printf("Choose a higher number....XXX\n");
            }
            else
            {
                printf("You Win...!!!\n");
            }

        } while (rnum != your_number);

        printf("You guessed the number in %d guesses\n", nguess);
        printf("=======================================\n");
        printf("Do you want to play again?(y/n)");
        scanf("%c", &play_again);

    } while (play_again == 'y' || play_again == 'Y');

    printf("thanks for playing");

    return 0;
}