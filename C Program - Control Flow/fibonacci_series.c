#include<stdio.h>
int main()
{
    int n;
    int i;
    int n1=0,n2=1;
    int nextTerm=n1+n2;
    printf("Enter the index of the series.\n");
    scanf("%d",&n);
    printf("Fibonacci series: %d %d ",n1,n2);
    for (i = 3; i <= n; ++i)
    {
        printf("%d ",nextTerm);
        n1=n2;
        n2=nextTerm;
        nextTerm=n1+n2;
    }
    
    return 0;
}