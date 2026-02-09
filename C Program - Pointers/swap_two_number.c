#include<stdio.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a=12,b=15;
    printf("Before Swaping\n");
    printf("a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter Swaping\n");
    printf("a=%d,b=%d",a,b);
    return 0;
}