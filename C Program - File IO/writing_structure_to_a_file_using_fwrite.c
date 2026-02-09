#include<stdio.h>
#include<stdlib.h>
struct person
{
    int id;
    char fname[20];
    char lname[20];
};

int main()
{
    FILE* outfile;
    outfile=fopen("person.exe","wb");
    if (outfile==NULL)
    {
        fprintf(stderr,"\nError generated file\n");
        exit(1);
    }
    struct person input1 = {1,"Akash","kumar"};
    // writing structure to file
    int flag=0;
    flag=fwrite(&input1,sizeof(struct person),1,outfile);
    if (flag)
    {
        printf("Contents of the structure written successfully");

    }
    else
    {
        printf("\nError writing to file");
    }
    fclose(outfile);
    return 0;
}