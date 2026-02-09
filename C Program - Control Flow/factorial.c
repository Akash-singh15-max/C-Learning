#include<stdio.h>
int main()
{
    int n;
    int fact=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    for (int i = n; i >=1; i--)
    {
        fact*=i;
    }
    printf("The factorial of %d is %d\n",n,fact);
    return 0;
}