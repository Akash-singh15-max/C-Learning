#include<stdio.h>
int main()
{
    char old_name[]="Akash.dat";
    // any string
    char new_name[]="Aku.dat";
    int value;
    value = rename(old_name,new_name);
    if (!value)
    {
        printf("%s","File name changed successfully");
    }
    else
    {
        printf("Error");
    }
    return 0;
}