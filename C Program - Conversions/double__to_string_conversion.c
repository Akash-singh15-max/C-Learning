#include<stdio.h>
int main()
{
    double n = 434232.54342;
    char str[100];
    sprintf(str,"%f",n);
    printf("The string is : %s\n",str);
    return 0;
}