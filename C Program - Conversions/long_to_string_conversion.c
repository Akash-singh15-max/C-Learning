#include<stdio.h>
#include<string.h>
int main()
{
    long n=1234;
    char str[10];
    sprintf(str,"%ld",n);
    printf("string is: %s\n",str);

    return 0;
}