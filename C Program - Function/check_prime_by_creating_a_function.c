#include<stdio.h>
int primenumber(int n)
{
    for (int i = 2; i < n/2; i++)
    {
        if (n%i!=0)
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
    return 0;
    
}
int main()
{
    int n;
    int res=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    res=primenumber(n);
    if (res==0)
    {
        printf("%d is a Prime number.\n",n);
    }
    else
    {
        printf("%d is not a Prime number.\n",n);
    }
    return 0;
}