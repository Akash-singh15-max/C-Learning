#include<stdio.h>
long power(int n,int x)
{
    long pow=1;
    for (int i = 0; i < x; i++)
    {
        pow=pow*n;
    }
    return pow;
}
int main()
{
    int n;
    printf("Enter any number.\n");
    scanf("%d",&n);
    int x;
    printf("Enter the power.\n");
    scanf("%d",&x);
    int result=power(n,x);
    printf("%d",result);
    return 0;
}