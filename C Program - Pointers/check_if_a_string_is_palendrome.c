#include<stdio.h>
void isPalendrome(char* string)
{
    char *ptr,*rev;
    ptr=string;
    while (*ptr!='\0')
    {
        ++ptr;
    }
    --ptr;
    for (rev = string; ptr>=rev;)
    {
        if (*ptr==*rev)
        {
            --ptr;
            rev++;
        }
        else
        break;
    }
    if (rev>ptr)
    {
        printf("String is Palendrome");
    }
    else
    {
        printf("String is not a Palendrome");
    }
}
int main()
{
    char str[1000]="madam";
    isPalendrome(str);
    return 0;
}