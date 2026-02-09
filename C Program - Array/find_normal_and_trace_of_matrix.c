#include<stdio.h>
#include<math.h>
int findNormal(int mat[][3],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum+=mat[i][j]*mat[i][j];
        }
        
    }
    return sqrt(sum);
}

int findTrace(int mat[][3],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=mat[i][i];
    }
    return sum;
}
int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("Normal of Matrix = %d\n",findNormal(mat,3));
    printf("Trace of matrix = %d\n",findTrace(mat,3));
    return 0;
}