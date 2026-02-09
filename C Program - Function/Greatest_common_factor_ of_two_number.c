#include<stdio.h>
#include<math.h>
int greatestCommonDivisor(int a, int b)
{
    // find minimum of a and b
    int result=((a<b)?a:b);
    while (result>0)
    {
        // check if both a and b is divisible by result
        if (a%result==0&& b%result==0)
        {
            break;
        }
        result--;
    }
    return result;
}
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Greatest common factor of %d and %d is %d\n",a,b,greatestCommonDivisor(a,b));
    return 0;
}