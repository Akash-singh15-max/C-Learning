#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
void fill_time(char*,int);
void fill_date(char*);
int input_format();
void clear_screen();
int main()
{
    
    char time[50];
    char date[100];
    int format=input_format();
    while(1){
    fill_time(time,format);
    fill_date(date);
    clear_screen();
    printf("\nCurrent Time: %s",time);
    printf("\nDate: %s\n",date);
    sleep(1);// sleep for 1 second
    }
    return 0;
}
void clear_screen(){
    system("cls");
}
int input_format(){
    int format;
    printf("\nChoose the time format: ");
    printf("\n1. 24 Hour format");
    printf("\n2. 12 Hour format (defalut)");
    printf("\nMake a choice(1/2): ");
    scanf("%d",&format);
    return format;
}

void fill_time(char* buffer,int format){
    time_t raw_time;
    struct tm *current_time;
    
    time(&raw_time);
    current_time=localtime(&raw_time);
    if(format==1){
        strftime(buffer,50,"%H:%M:%S",current_time);
    }else{
        strftime(buffer,50,"%I:%M:%S %p",current_time);

    }
}
void fill_date(char* buffer)
{
    time_t raw_time;
    struct tm *current_time;
    
    time(&raw_time);
    current_time=localtime(&raw_time);
    strftime(buffer,50,"%A %B %d %Y",current_time);

}