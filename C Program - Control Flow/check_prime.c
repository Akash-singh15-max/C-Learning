#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            printf("The number %d is not a prime number\n",n);
            break;
        }
        else
        {
            printf("The number %d is a prime number\n",n);
            break;
        }
    }
    
    return 0;
}