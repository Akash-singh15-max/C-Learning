#include<stdio.h>
int main()
{
    int i,j;
    int rows=5;
    char character = 'A';
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("%c ",character);
        }
        printf("\n");
        character++;
    }
    
    return 0;
}