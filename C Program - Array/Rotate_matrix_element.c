#include<stdio.h>
#define R 4
#define C 4
void rotateMatrix(int m,int n,int mat[R][C])
{
    int row=0,col=0;
    int prev,curr;
    /*
        row: starting row index
        m: ending row index
        col: starting col index
        n: ending col index
        i: iterator
    */
   while (row<m&&col<n)
   {
    if (row+1==m||col+1==n)
    {
        break;
    }
    // store the first element of next row and this element will replace the first element of current row
    prev=mat[row+1][col];
    // move elements of first row from remaning rows
    for (int i = col; i < n; i++)
    {
        curr=mat[row][i];
        mat[row][i]=prev;
        prev=curr;
    }
    row++;
    // move the elements of last column from the remaning columns
    for (int i = row; i < m; i++)
    {
        curr=mat[i][n-1];
        mat[i][n-1]=prev;
        prev=curr;
    }
    m--;
    // move the elements of first column from the remaning rows
    if (col<n)
    {
        for (int i = m-1; i >= row; i--)
        {
            curr=mat[i][col];
            mat[i][col]=prev;
            prev=curr;
        }
        
    }
    col++;
   }
   
}
int main()
{
    int mat[R][C]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};
    printf("\nInput Matrix\n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf(" %d",mat[i][j]);
        }
        printf("\n");
    }
    rotatematrix(R,C,mat);
    printf("\nRotated Matrix\n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf(" %d",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}