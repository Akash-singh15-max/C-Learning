#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    char* name;
    int id;
    int age;
};

// setting up rules for comparison to sort the students based on names
int comparator(const void* p,const void* q)
{
    return strcmp(((struct Student*)p)->name,((struct Student*)q)->name);
}
int main()
{
    int i,n=3;
    struct Student arr[n];
    // get the students data
    arr[0].id=1;
    arr[0].name="Aku";
    arr[0].age=18;

    arr[1].id=2;
    arr[1].name="Akash";
    arr[1].age=20;

    arr[2].id=3;
    arr[2].name="Vishal";
    arr[2].age=16;

    // print the unsorted structure
    printf("\nUnsorted Student Records:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Id = %d,\tName = %s,\tAge = %d\n",arr[i].id,arr[i].name,arr[i].age);

    }
    
    // sort the structure based on the specified comparator
    qsort(arr,n,sizeof(struct Student),comparator);
    //print the sorted structure
    printf("\n\nStudent Records sorted by name:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Id = %d,\tName = %s,\tAge = %d\n",arr[i].id,arr[i].name,arr[i].age);
        
    }
    printf("\n");
    return 0;
}