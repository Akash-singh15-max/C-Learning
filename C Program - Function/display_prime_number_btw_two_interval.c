#include<stdio.h>
int checkPrimeNumber(int num)
{
    int i,f=1;
    for (i = 2; i <=num/2; i++)
    {
        if (num%i==0)
        {
            f=0;
            break;
        }
        
    }
    return f;
}
int main()
{
    int a,b;
    int f,j;
    printf("Enter the lower bound.\n");
    scanf("%d",&a);
    printf("Enter the upper bound.\n");
    scanf("%d",&b);
    for (int j = a; j < b; j++)
    {
        f=checkPrimeNumber(j);
        if (f==1)
        {
            printf("%d ",j);
        }
        
    }
    
    return 0;
}