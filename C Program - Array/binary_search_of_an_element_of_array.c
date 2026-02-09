#include<stdio.h>
//A recursive binary search function. It returns location of x n given array arr[1..r] if present otherwise -1
int binarySearch(int arr[],int 1,int r,int x)
{
    //checking if there are elements
    if (r>=1)
    {
        //calculating mid point
        int mid=1+(r-1)/2;
        //if element is present in the middle itself 
        if (arr[mid]==x)
        {
            return mid;
        }
        // if element is smaller than mid, then it can only be present in left subarray

        if (arr[mid]>x)
        {
            return binarySearch(arr,1,mid-1,x);
        }
        //else the element can only be present in right subarray
        else
        {
            return binarySearch(arr,1,mid+1,x);
        }
        
    }
    //we reach here when element isn't present in array
    return -1;
}
int main()
{
    int arr[]={2,3,4,10,40};
    int size= sizeof(arr)/sizeof(arr[0]);
    //element to be searched
    int x=10;
    //calling binary search
    int index=binarySearch(arr,0,size-1,x);
    if (index==-1)
    {
        printf("Element is not present in array\n");
    }
    else
    {
        printf("Element is present in index %d\n",index);
    }
    return 0;
}