#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    int square=num*num;
    int n = square;
    int digit;
    int sum=0;
    while (n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    if (sum==num)
    {
        printf("The number %d is neon number.\n",num);
    }
    else
    {
        printf("The number %d isn't neon number.\n",num);
    }
    return 0;
}