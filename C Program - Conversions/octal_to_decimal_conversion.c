// // Using format specifier
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter an octal number: \n");
//     scanf("%o",&n);
//     printf("\nDecimal Representation is: %d",n);
//     return 0;
// }

// Standard Method (using function)
#include<stdio.h>
#include<math.h>
int main()
{
    int octalnumber = 123,decimalnumber=0,i=0;
    while (octalnumber!=0)
    {
        decimalnumber=decimalnumber+(octalnumber%10)*pow(8,i++);
        octalnumber=octalnumber/10;

    }
    printf("Decimal Number is: %d",decimalnumber);
    return 0;
}
