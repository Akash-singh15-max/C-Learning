// It is an array of natural numbers where the nth row contains n elements.
#include<stdio.h>
void floyd (int n)
{
    int i,j=1;
    for (int i = 1; i <=(n*(n+1))/2; i++)
    {
        printf("%d ",i);
    }
    if (i==(j*(j+1))/2)
    {
        printf("\n");
        j++;
    }
    
    
}
int main()
{
    floyd(6);
    return 0;
}