#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50]="Hello ";
    char s2[]="Akash";
    int n= strcat(s1,s2);
    printf("Concatenated String: %s\n",n);
    return 0;
}