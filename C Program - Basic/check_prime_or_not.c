#include<stdio.h>
void checkPrime(int n)
{
    int flag=1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag = 0;
            break;
        }
        
    }
    if (flag)
    {
        printf("The number %d is Prime Number\n",n);
    }
    else
    {
        printf("The number %d is not a Prime Number\n",n);
    }
    
}
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    checkPrime(n);
    return 0;
}