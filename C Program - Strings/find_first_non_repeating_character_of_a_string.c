#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="cprogrammingcode";
    int len=strlen(str);
    int flag;
    // two loops to compare each character with other character
    for (int i = 0; i < len; i++)
    {
        flag = 0;
        for (int j = 0; j < len; j++)
        {
            if ((str[i]==str[j])&&(i!=j))
            {
                flag=1;
                break;
            }
            
        }
        if (flag==0)
        {
            printf("First non-repeating character is %c",str[i]);
            break;
        }
        
    }
    if (flag==1)
    {
        printf("Didn't find any non-repeating character");
    }
    
    return 0;
}