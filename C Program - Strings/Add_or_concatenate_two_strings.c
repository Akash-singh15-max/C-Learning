#include<stdio.h>
void concatenateStrings(char* str1,const char* str2)
{
    while (*str1)
    {
        ++str1;
    }
    while (*str2)
    {
        *str1++=*str2++;
    }
    *str1='\0';
}
int main()
{
    char string1[50]="Hello, ";
    char string2[]="Akash";
    concatenateStrings(string1,string2);
    printf("Concatenated String: %s\n",string1);
    return 0;
}