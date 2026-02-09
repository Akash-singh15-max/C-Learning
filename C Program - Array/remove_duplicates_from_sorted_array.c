#include<stdio.h>
int removeDuplicates(int arr[],int n)
{
    if (n==0||n==1)
    {
        return n;
    }
    int temp[n];
    int j=0;
    //if current element is not equal to next element then store that current element
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]!=arr[i+1])
        {
            temp[j++]=arr[i];
        }
        
    }
    //store last element as whether it is unique or repeated, it hasn't stored previosly
    temp[j++]=arr[n-1];
    //modify original array
    for (int i = 0; i < j; i++)
    {
        arr[i]=temp[i];
    }
    
    return j;
}
int main()
{
    int arr[]={1,2,2,3,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    n=removeDuplicates(arr,n);
    //print updated array
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}