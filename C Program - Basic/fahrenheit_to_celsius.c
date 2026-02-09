#include<stdio.h>
int main()
{
    int temp;
    
    printf("Enter temperature in fahrenheit\n");
    scanf("%d",&temp);
    int celsius=(temp-32)*5/9;
    printf("Temperature in celsius: %d\n",celsius);
    return 0;
}