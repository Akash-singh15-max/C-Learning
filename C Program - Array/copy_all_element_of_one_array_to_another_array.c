#include<stdio.h>
int main()
{
    int a[]={3,6,9,2,5};
    int n=5;
    int b[n],i;
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    printf("The first array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe second array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}