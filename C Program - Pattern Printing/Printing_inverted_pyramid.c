#include<stdio.h>
int main()
{
    int rows;
    int i,j,k;

    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    for (int i = rows; i >= 1; i--)
    {
       
       for (int j = 0; j < 2*(rows-i); j++)
       {
            printf(" ");
       }
       for (int k = 0; k < 2*i; k++)
       {
        printf("* ");
       }
       
        printf("\n");
    }
    
    return 0;
}