#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int m,n,p,q,i,j,k;
    printf("Enter the row and column of matrix A\n");
    scanf("%d%d",&m,&n);
    printf("Enter the row and column of matrix B\n");
    scanf("%d%d",&p,&q);
    if ((n==p)&&(m<10)&&(n<10)&&(p<10)&&(q<10))
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
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d",&B[i][j]);
            }
            
        }
        printf("Display the element of matrix B\n");
        for (int i = 0; i < p; i++)
        {
            printf("\n");
            for (int j = 0; j < q; j++)
            {
                printf("%d\t",B[i][j]);
            }
            
        }
        printf("\nMultiplication of Matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                C[i][j]=0;
                for (int k = 0; k < n; k++)
                {
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
                
            }
            
        }
        printf("Display the element of matrix C\n");
        for (int i = 0; i < m; i++)
        {
            printf("\n");
            for (int j = 0; j < q; j++)
            {
                printf("%d\t",C[i][j]);
            }
            
        }
        
    }
    
    return 0;
}