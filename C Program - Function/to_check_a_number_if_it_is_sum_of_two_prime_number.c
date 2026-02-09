#include<stdio.h>
int isPrime(int n)
{
    int i,isPrime=1;
    // 0 and 1 are not prime numbers
    if (n==0||n==1)
    {
        isPrime=0;
    }
    else
    {
        for (int i = 2; i <= n/2; i++)
        {
            if (n%i==0)
            {
                isPrime==0;
                break;
            }
            
        }
        
    }
    return isPrime;
}
int main()
{
    int n;
    printf("Enter any number.\n");
    scanf("%d",&n);
    int falg=0;
    for (int i = 2; i <= n/2; i++)
    {
        //condition for i to be a prime number
        if (isPrime(i)==1)
        {
            //condition for n-i to be a prime number
            if (isPrime(n-i)==1)
            {
                printf("Yes.\n");
                return 0;
            }
            
        }
        
    }
    printf("No.\n");
    return 0;
}