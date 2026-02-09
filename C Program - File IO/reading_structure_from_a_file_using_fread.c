#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* infile;
    infile=fopen("person1.dat","wb+");
    if (infile==NULL)
    {
        fprintf(stderr,"\nError opening file\n");
        exit(1);
    }
    struct person write_struct = {1,"Akash","kumar"};
    // writing the file
    fwrite(&write_struct,sizeof(write_struct),1,infile);
    struct person read_struct;
    // setting pointer to start of the file
    rewind(infile);
    // reading to read_struct
    fread(&read_struct,sizeof(read_struct),1,infile);
    printf("Name: %s %s \nId: %d\n",read_struct.fname,read_struct.lname,read_struct.id);
    fclose(infile);
    return 0;
}