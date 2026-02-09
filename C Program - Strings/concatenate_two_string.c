#include<stdio.h>
void concatenateStings(char* s1, char* s2)
{
    while (*s1)
    {
        ++s1;
    }
    while (*s2)
    {
        *s1++=*s2++;
    }
    *s1='\0';
}
int main()
{
    char string1[50]="Hello";
    char string2[]="Akash";
    concatenateStrings(string1,string2);
    printf("Concatenated String: %s\n",string1);
    return 0;
}