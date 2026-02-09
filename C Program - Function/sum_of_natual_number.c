#include<stdio.h>
int recSum(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    return n+recSum(n-1);
}
int main()
{
    int n;
    printf("Enter the last natural number from which you want the sum of\n");
    scanf("%d",&n);
    printf("Sum = %d\n",recSum(n));
    return 0;
}