#include<stdio.h>
#include<string.h>
void sum(char b1[],char b2[], int l1, int l2)
{
    
}
int main()
{
    char b1[100]="1001",b2[100]="1001";
    int l1,l2;
    printf("Enter binary number 1: ");
    printf("%s \n",b1);
    printf("Enter binary number 2: ");
    printf("%s \n",b2);
    l1=strlen(b1);
    l2=strlen(b2);
    if (l1>l2)
    {
        sum(b1,b2,l1,l2);
    }
    else
    {
        sum(b2,b1,l2,l1);
    }
    return 0;
}