#include<stdio.h>
#include<math.h>
int main()
{
    int octalnumber=123,decimalnumber=0,i=0;
    while (octalnumber!=0)
    {
        decimalnumber=decimalnumber+(octalnumber%10)*pow(8,i++);
        octalnumber=octalnumber/10;
    }
    printf("Decimal Number: %d\n",decimalnumber);
    return 0;
}