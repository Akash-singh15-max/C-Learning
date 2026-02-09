#include<stdio.h>
#define N 4
int areSame(int A[][N],int B[][N])
{
    int i,j;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i][j]!=B[i][j])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        
    }
    
}
int main()
{
    int A[N][N]={{1,2,3,4},
                 {1,2,3,4},
                 {1,2,3,4},
                 {1,2,3,4}};
    int B[N][N]={{1,2,3,4},
                 {1,2,3,4},
                 {1,2,3,4},
                 {1,2,3,4}};
    // display first matrix
    printf("\nFirst Matrix:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf(" %d",A[i][j]);
        }
        printf("\n");
    }
    // display second matrix
    printf("\nSecond Matrix\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf(" %d",B[i][j]);
        }
        printf("\n");
    }
    if (areSame(A,B))
    {
        printf("\nMatrices are equal.");
    }
    else
    {
        printf("\nMatrices aren't equal.");
    }
    return 0;
}