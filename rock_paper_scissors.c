#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char choice;
    int player;
    char play_again;
    srand(time(NULL));
    do
    {
        system("cls");
        int computer = (rand() % 3) + 1;
        printf("Lets play Rock,Paper, and Scissors\n");
        printf("choose one\n");
        printf("a.rock\n");
        printf("b.paper\n");
        printf("c.scissors\n");
        printf("Enter your choice;\n");
        scanf(" %c", &choice);

        if (choice == 'a')
        {
            player = 1;
        }
        else if (choice == 'b')
        {
            player = 2;
        }
        else if (choice == 'c')
        {
            player = 3;
        }
        else
        {
            printf("invalide choice");
            return 1;
        }
        if (player == 1)
        {
            printf("rock\n");
        }
        else if (player == 2)
        {
            printf("paper\n");
        }
        else
        {
            printf("scissors\n");
        }

        printf("Computer choice\n");

        if (computer == 1)
        {
            printf("rock\n");
        }
        else if (computer == 2)
        {
            printf("paper\n");
        }
        else if (computer == 3)
        {
            printf("scissors\n");
        }

        if (computer == player)
        {
            printf("Tie!!!");
        }
        else if ((player == 1 && computer == 3) ||
                 (player == 2 && computer == 1) ||
                 (player == 3 && computer == 2))
        {
            printf("You win!!!\n");
        }
        else
        {
            printf("You Lost\n");
        }

        printf("\ndo you want to play again?:(y/n)");
        scanf(" %c", &play_again);
    } while (play_again == 'y' || play_again == 'Y');

    printf("thanks for playing");
    return 0;
}