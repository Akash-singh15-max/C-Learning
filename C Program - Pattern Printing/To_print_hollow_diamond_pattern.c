#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    int i,j;
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j >i; j--)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 1; j < 2*(i-1); j++)
        {
            printf(" ");
        }
        if (i==1)
        {
            printf("\n");
        }
        else
        {
            printf("*\n");
        }
    }
    for (int i = n-1; i >=1; i--)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 1; j < 2*(i-1); j++)
        {
            printf(" ");
        }
        if (i==1)
        {
            printf("\n");
        }
        else
        {
            printf("*\n");
        }
    }
    
    return 0;
}