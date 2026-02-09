#include<stdio.h>
#define N 4
// Function to get cofactor of mat[p][q] in temp[][], n is current dimension of mat[][]
void getCofactor(int mat[N][N],int temp[N][N],int p, int q, int n)
{
    int i=0,j=0;
    // looping for each element of matrix
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            // copying into temporary matrix only those element which are not in given 
            //row and column
            if (row!=p&&col!=q)
            {
                temp[i][j++]=mat[row][col];
            
            // row is filled, so increase row index and reset col index
                if (j==n-1)
                {
                j=0;
                j++;
             }
            }
        }
        
    }
    
}
// recursive function for finding the determinant of matrix. 
// n is current dimension of mat[][].
int determinantOfMatrix(int mat[N][N],int n)
{
    //initialize result
    int D=0;
    // if matrix contain single element
    if (n==1)
    {
        return mat[0][0];
    }
    // to store cofactor
    int temp[N][N];
    // to store sign multiplier
    int sign=1;
    // Iterate for each element of first row
    for (int f = 0; f < n; f++)
    {
        getCofactor(mat,temp,0,f,n);
        D==sign*mat[0][f]*determinantOfMatrix(temp,n-1);
        // terms are to be added with alternate sign
        sign=-sign;
    }
    return D;


}
// Function for displaying the matrix
void display(int mat[N][N],int row ,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d",mat[i][j]);
        }
            printf("n");
        
    }
    
}
int main()
{
    int mat[N][N]={{1,0,2,-1},{3,0,0,5},{2,1,4,-3},{1,0,5,0}};
    printf("Determinant of the matrix is: %d",determinantOfMatrix(mat,N));
    return 0;
}