#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 50
int main()
{
    time_t t;
    struct tm *tmp;
    char MY_TIME[size];
    time(&t);
    tmp=localtime(&t);
    // using strftime to display time
    strftime(MY_TIME,sizeof(MY_TIME),"%x - %I:%M%p",tmp);
    printf("Formated date and time : %s\n",MY_TIME);
    return 0;
}