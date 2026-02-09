// // Using conditional statemensts
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     bool n=true;
//     if (n==true)
//     {
//         printf("true");
//     }
//     else
//     {
//         printf("false");
//     }
//     return 0;
// }


// Using ternary operator

#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool n=true;
    const char* s=(n==true)?"true":"false";
    printf("%s",s);
    return 0;
}