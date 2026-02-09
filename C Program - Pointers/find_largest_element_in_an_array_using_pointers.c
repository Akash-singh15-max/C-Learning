#include<stdio.h>
#include<stdlib.h>
void findLargest(int* arr, int N)
{
    int i;
    for (int i = 1; i < N; i++)
    {
        // Update the largest element
        if (*arr<*(arr+i))
        {
            *arr=*(arr+i);
        }
        
    }
    printf("%d ",*arr);
}
int main()
{
    int i,N=4;
    int* arr;
    // Memory allocation to arr
    arr=(int*)calloc(N,sizeof(int));
    // condition for no memory allocation
    if (arr==NULL)
    {
        printf("No memory allocated\n");
        exit(0);
    }
    // store the elements
    *(arr+0)=14;
    *(arr+1)=12;
    *(arr+2)=20;
    *(arr+3)=19;
    findLargest(arr,N);
    return 0;
}