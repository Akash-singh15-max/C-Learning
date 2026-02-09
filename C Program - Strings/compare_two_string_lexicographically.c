#include<stdio.h>
void compareStrings(char* s1,char* s2)
{
    int i;
    for (int i = 0; s1[i]!='\0'||s2[i]!='\0'; i++)
    {
        if (s1[i]>s2[i])
        {
            printf("string 1 is lexicographically greater than string 2\n");
            return;
        }
        else if (s2[i]>s1[i])
        {
            printf("string 2 is lexicographically greater than string 1\n");
            return;
        }
        
    }
   
    
}
int main()
{
    char s1[20]="help";
    char s2[20]="held";
    compareStrings(s1,s2);
    return 0;
}