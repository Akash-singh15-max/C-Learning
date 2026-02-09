#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int m,n,i,j;
    printf("Enter the number of row and column of matrices\n");
    scanf("%d %d",&m,&n);
    if ((m==n)&&(m<10)&&(n<10))
    {
        printf("Enter the element of matrix A\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d",&A[i][j]);
            }
            
        }
        printf("Display the element of matrix A\n");
        for (int i = 0; i < m; i++)
        {
            printf("\n");
            for (int j = 0; j < n; j++)
            {
                printf("%d\t",A[i][j]);
            }
            
        }
        printf("\nEnter the element of matrix B\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d",&B[i][j]);
            }
            
        }
        printf("Display the element of matrix B\n");
        for (int i = 0; i < m; i++)
        {
            printf("\n");
            for (int j = 0; j < n; j++)
            {
                printf("%d\t",B[i][j]);
            }
            
        }
        printf("\nMatrix Addition\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                C[i][j]=A[i][j]+B[i][j];
            }
            
        }
        printf("Display the element of matrix C\n");
        for (int i = 0; i < m; i++)
        {
            printf("\n");
            for (int j = 0; j < n; j++)
            {
                printf("%d ",C[i][j]);
            }
            
        }
        
    }
    
    return 0;
}