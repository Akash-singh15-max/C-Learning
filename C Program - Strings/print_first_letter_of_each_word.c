#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Akash is aku""the good guy";
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (i==0&&str[i]!=' ')
        {
            printf("%c ",str[i]);
        }
        else if (i>0&&str[i-1]==' ')
        {
            printf("%c ",str[i]);
        }
        
    }
    
    return 0;
}