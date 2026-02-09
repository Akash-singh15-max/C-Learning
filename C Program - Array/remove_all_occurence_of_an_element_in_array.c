#include<stdio.h>
int remove_element(int* array,int n,int value)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        if (array[i]!=value)
        {
            printf("%d ",array[i]);
        }
        
    }
    
}
int main()
{
    int arr[6]={1,2,1,3,1},size=5,value=1;
    remove_element(arr,size,value);
    return 0;
}