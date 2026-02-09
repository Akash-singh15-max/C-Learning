#include<stdio.h>
typedef struct complex
{
    int real;
    int imag;

}complex;
complex add(complex a,complex b);
int main()
{
    complex a,b,sum;
    printf("For 1st complex number\n");
    printf("Enter real and imaginary part\n");
    scanf("%d %d",&a.real,&a.imag);
    printf("For 2nd complex number\n");
    scanf("%d %d",&b.real,&b.imag);
    sum=add(a,b);
    printf("sum=%d+%di",sum.real,sum.imag);
    
    return 0;
}
complex add(complex a,complex b)
{
    complex temp;
    temp.real=a.real+b.real;
    temp.imag=a.imag+b.imag;
    return (temp);
}