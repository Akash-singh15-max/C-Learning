#include<stdio.h>
int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the index\n");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n",n,fact(n));
    return 0;
}