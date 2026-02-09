#include<stdio.h>
int main()
{
    int x,y;
    int max;
    printf("Enter the value of x.\n");
    scanf("%d",&x);
    printf("Enter the value of y.\n");
    scanf("%d",&y);
    max=(x>y)?x:y;
    while (1)
    {
        if (max%x==0&&max%y==0)
        {
            printf("The LCM of %d and %d is %d.\n",x,y,max);
            break;
        }
        ++max;
    }
    
    return 0;
}