#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value in x\n");
    scanf("%d",&x);
    printf("Enter the value in y\n");
    scanf("%d",&y);
    printf("Before swaping: x=%d, y=%d\n",x,y);
    int temp=x;
    x=y;
    y=temp;
    printf("After swaping: x=%d, y=%d\n",x,y);
    return 0;
}