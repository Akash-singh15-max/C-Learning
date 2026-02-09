#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        // print leading spaces
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            if (k==1||k==2*i-1||n==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}