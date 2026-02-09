#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    system("cls");
    printf("Welcome to the world of Guessing world\n");
    random=rand()%100+1;
    do
    {
        printf("Please enter your Guess between (1 to 100): ");
        scanf("%d",&guess);
        printf("\n");
        if (guess<random)
        {
            printf("Guess some larger number\n");

        }
        else if (guess>random)
        {
            printf("Guess some smaller number\n");
        }
        else
        {
            printf("Congratulations !!! You have successfully guessed the number in %d attempts",no_of_guess);
        }
    } while (guess!=random);
    printf("\nBye Bye, Thanks for playing.");
    printf("\nDevelopd by Aku\n");
    return 0;
}