#include<stdio.h>
int main()
{
    int i,j,m=3,n=3,a=0,sum=0;
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // if both rows and columns are equal then it is possible to calculate diagonal matric
    if (m==n)
    {
        printf("The matrix is\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf(" %d",mat[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < m; i++)
        {
            // calculating the main diagonal sum
            sum+=mat[i][i];
            // calculating the off diagonal sum
            a=a+mat[i][m-i-1];
        }
        printf("\nMain Diagonal elements sum is = %d\n",sum);
        printf("\nOff - diagonal elements sum is = %d\n",a);
        
    }
    else
    {
        //if both rows and columns are not equal then it is not possible to calculate the sum
        printf("not a square matrix\n");
    }
    return 0;
}