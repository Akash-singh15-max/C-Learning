#include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
struct Student
{
    char* name;
    int roll_number;
    int age;
    double total_marks;
};

int main()
{
    int i=0,n=2;
    // create the student's structure variable with n Student's records
    struct Student student[n];
    student[0].roll_number=1;
    student[0].name="Akash";
    student[0].age=18;
    student[0].total_marks=70.20;

    student[1].roll_number=2;
    student[1].name="Vishal";
    student[1].age=16;
    student[1].total_marks=80;

    // prints the students information
    printf("Student Records:\n\n");
    for (int i = 0; i < n; i++)
    {
       
    
    printf("\tName = %s\n",student[i].name);
    printf("\tRoll Number = %d\n",student[i].roll_number);
    printf("\tAge = %d\n",student[i].age);
    printf("\tTotal Marks = %.2f\n\n",student[i].total_marks);
    }
    return 0;
}