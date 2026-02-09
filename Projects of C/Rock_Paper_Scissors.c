#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int greater(char char1,char char2)
{
    if (char1==char2)
    {
        return -1;
    }
    if (char1=='r'&&char2=='s')
    {
        return 1;
    }
    else if (char1=='s'&&char2=='r')
    {
        return 0;
    }
    else if (char1=='s'&&char2=='p')
    {
        return 1;
    }
    else if (char1=='p'&&char2=='s')
    {
        return 0;
    }
    else if (char1=='p'&&char2=='r')
    {
        return 1;
    }
    else if (char1=='r'&&char2=='p')
    {
        return 0;
    }
    
}
int main()
{
    int playerScore=0,compScore=0;
    int playerChar,compChar,temp;
    int i;
    char dict[]={'r','p','s'};
    // system("cls");
    printf("\n\nWelcome to the Game\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Player Turn\n");
        printf("Enter 1 for Rock, 2 for Paper and 3 for Scissors: ");
        scanf("%d",&temp);
        getchar();
        playerChar=dict[temp-1];
        printf("\nYou Choose:\t%c",playerChar);

        printf("\nCPU Turn\n");
        temp=generateRandomNumber(3)+1;
        compChar=dict[temp-1];
        printf("CPU Choose:\t%c\n",compChar);

        if (greater(playerChar,compChar)==1)
        {
            playerScore+=1;
            printf("You Won\n");
        }
        else if (greater(compChar,playerChar)==-1)
        {
            playerScore+=1;
            compScore+=1;
            printf("It's a Draw\n");
        }
        else
        {
            compScore+=1;
            printf("CPU Won\n");
        }
        printf("Your score: \t%d\nCPU score: \t%d\n",playerScore,compScore);
        printf("\n");
    }
    if (playerScore>compScore)
    {
        printf("You won the game\n");
    }
    else if (compScore>playerScore)
    {
        printf("CPU won the game\n");
    }
    else
    {
        printf("It's a draw game\n");
    }
    
    return 0;
}