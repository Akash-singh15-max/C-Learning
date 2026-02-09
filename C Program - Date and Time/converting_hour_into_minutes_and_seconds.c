#include<stdio.h>
void ConvertHours(int n)
{
    long long int minutes, seconds;
    minutes = n*60;
    seconds = n*3600;
    printf("Minutes = %lld\nSeconds = %lld\n",minutes,seconds);
}
int main()
{
    int n=5;
    ConvertHours(n);
    return 0;
}