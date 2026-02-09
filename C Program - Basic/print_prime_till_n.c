#include<stdio.h>
int isPrime(int n)
{
    if (n==1||n==0)
    {
        return 0;
    }
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the last number to which you want to check\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}