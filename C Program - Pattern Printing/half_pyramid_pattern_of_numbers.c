// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows.\n");
//     scanf("%d",&n);
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



//inverted half pyramid of number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows.\n");
    scanf("%d",&n);
    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}