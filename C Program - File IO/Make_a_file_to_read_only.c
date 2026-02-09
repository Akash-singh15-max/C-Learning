// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE* demo;
//     demo=fopen("demo_file.txt","w+");
//     fprintf(demo,"%s %s %s","Welcome","to","home");
//     fclose(demo);
//     return 0;
// }

//Method 2
#include<stdio.h>
int main()
{
    FILE* demo;
    int display;
    demo=fopen("demo_file.txt","r");
    while (1)
    {
        display=fgetc(demo);
        if (feof(demo))
        {
            break;
        }
        printf("%c",display);
    }
    fclose(demo);
    return 0;
}