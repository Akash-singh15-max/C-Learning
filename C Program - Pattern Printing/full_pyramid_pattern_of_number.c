#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2*(rows-i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k < 2*i; k++)
        {
            printf("%d ",i);
        }
        
        printf("\n");
    }
    
    return 0;
}