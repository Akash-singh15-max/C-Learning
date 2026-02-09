#include<stdio.h>
int m=3,n=3;
void print(int arr[m][n])
{
    int i,j;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        
    }
    
}
int main()
{
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    print(arr);
    return 0;
}