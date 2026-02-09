#include<stdio.h>
#define n 3
void interchangeFirstLast(int mat[][n])
{
    int rows=n;
    for (int i = 0; i < n; i++)
    {
        int t=mat[0][i];
        mat[0][i]=mat[rows-1][i];
        mat[rows-1][i]=t;
    }
    
}
int main()
{
    int mat[n][n]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Input Matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d",mat[i][j]);
        }
        printf("\n");
    }
    interchangeFirstLast(mat);
    printf("\nOutput Matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}