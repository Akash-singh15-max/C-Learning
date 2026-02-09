#include<stdio.h>
void printPattern(int n)
{
    // for upper part
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    // for lower part
    for (int i = n-1; i > 0; i--)
    {
        for (int j = i; j >0; j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
}
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("\n");
    printPattern(n);
    return 0;
}