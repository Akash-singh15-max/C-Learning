#include<stdio.h>
int largest(int arr[],int n)
{
    int i;
    int max=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    return max;
}
int main()
{
    int arr[]={12,22,33,55,123,3};
    int n=sizeof(arr) / sizeof(arr[0]);
    printf("largest in given array is %d\n",largest(arr,n));
    return 0;
}