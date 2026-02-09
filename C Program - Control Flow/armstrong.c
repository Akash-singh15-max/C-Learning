#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int p=0;
    int temp=n;
    while (n>0)
    {
        int rem= n%10;
        p=(p)+(rem*rem*rem);
        n=n/10;
    }
    if (temp==p)
    {
        printf("Yes. It is Armstrong Number\n");
    }
    else
    {
        printf("No. It is not a Armstrong number\n"); 
    }
    return 0;
}