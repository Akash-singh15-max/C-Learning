#include<stdio.h>
int main()
{
    char arr[10]="GeEks";
    int code;
    printf("The string is %s\n",arr);
    for (int i = 0; arr[i]!= '\0'; i++)
    {
        code=arr[i];
        printf("The Unicode code point at %d is: %d\n",i,code);
    }
    
    return 0;
}