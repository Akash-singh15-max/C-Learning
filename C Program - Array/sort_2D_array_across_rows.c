#include<stdio.h>
void sortRowWise(int m[][4],int r,int c)
{
    int t=0;
    // loop for rows of 2D array
    for (int i = 0; i < r; i++)
    {
        // loop for column of 2D array
        for (int j = 0; j < c; j++)
        {
            // loops for comparison and swaping the elements
            for (int k = 0; k < c-j-1; k++)
            {
                if (m[i][k]>m[i][k+1])
                {
                    t=m[i][k];
                    m[i][k]=m[i][k+1];
                    m[i][k+1]=t;
                }
                
            }
            
        }
        
    }
    // print the sorted matrix
    printf("\nRow-Wise sorted 2D array\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d",m[i][j]);
        }
        printf("\n");
    }
    
}
int main()
{
    int arr[][4]={{8,5,7,2},
                  {7,3,0,1},
                  {8,5,3,2},
                  {9,4,2,1}
                  };
    printf("\nInput Array \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    sortRowWise(arr,4,4);
    return 0;
}