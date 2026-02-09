#include<stdio.h>
int main()
{
    int a,b;
    int i,j;
    int flag;
    printf("Enter the lower bound of the interval.\n");
    scanf("%d",&a);
    printf("Enter the upper bound of the interval.\n");
    scanf("%d",&b);
    printf("Prime number between %d and %d are: ",a,b);
    for (int i = a; i < b; i++)
    {
        if (i==1||i==0)
        {
            continue;
        }
        flag =1;

    
    for (int j = 2; j < i/2; j++)
    {
        if (i%j==0)
        {
            flag=0;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("%d ",i);
    }
    
    }
    return 0;
}