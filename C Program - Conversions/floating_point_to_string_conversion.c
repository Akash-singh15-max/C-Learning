#include<stdio.h>
int main()
{
    float n = 123.002;
    char str[100];
    sprintf(str,"%f",n);
    printf("The string is : %s\n",str);

    return 0;
}