#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter the last natural number from which you want the sum of\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum = %d\n",sum);
    return 0;
}