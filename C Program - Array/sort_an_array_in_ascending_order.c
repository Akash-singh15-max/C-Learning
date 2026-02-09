#include<stdio.h>
int ascending(int arr[],int n)
{
    int i,j,t=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
            
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int main()
{
    int arr[]={123,534,53,5,100};
    int n=5;
    ascending(arr,n);
    return 0;
}