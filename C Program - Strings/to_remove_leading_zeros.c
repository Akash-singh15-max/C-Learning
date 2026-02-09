#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000]="00001234";
    int i,c=-1;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]!='0')
        {
            c=i;
            break;
        }
        
    }
    for (int i = c; i < strlen(a); i++)
    {
        printf("%c",a[i]);
    }
    
    return 0;
}