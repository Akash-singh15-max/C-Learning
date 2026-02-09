#include<stdio.h>
#include<math.h>
int main()
{
    double p=10000;
    double r=5;
    double t=2;
    double amount=p*((pow(1+r/100,t)));
    double CI = amount-p;
    printf("CI = %lf",CI);
    return 0;
}