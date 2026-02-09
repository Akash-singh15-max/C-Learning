// #include<stdio.h>
// int main()
// {
//     char c = 'A';
//     printf("%d",(int)(c));
//     return 0;
// }

//using sscanf
#include<stdio.h>
int main()
{
    char* s="136";
    int x;
    sscanf(s,"%d",&x);
    printf("The integer value of x is %d\n",x);
    return 0;
}