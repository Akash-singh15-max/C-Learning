#include<stdio.h>
int main()
{
    int arr[]={23,44,1,24,444};
    int n=5;
    int t=0,i,j;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]<arr[j])
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
    
    
    return 0;
}





//Method II (using function)
#include<stdio.h>
int decending(int a[],int n)
{
    int i,j,t=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
}
int main()
{
    int arr[]={12,453,5,534,22};
    int n=5;
    decending(arr,n);
    return 0;
}