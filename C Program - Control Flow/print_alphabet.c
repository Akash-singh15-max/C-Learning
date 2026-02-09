#include<stdio.h>
int main()
{
    printf("Alphabet from (A-Z) are:\n");
    for (int i = 65; i <= 90; i++)
    {
        printf("%c ",i);
    }
    printf("\nAlphabet from (a-z) are:\n");
    for (int i = 97; i <= 122; i++)
    {
        printf("%c ",i);
    }
    
    return 0;
}