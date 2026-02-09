#include<stdio.h>
int main()
{
    int n=5;
    // print the top pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" "); 
        
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    // print the inverted pyramid
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}