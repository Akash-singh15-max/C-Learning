#include<stdio.h>
typedef struct complexNumber
{
    int real;
    int img;
}complex;
complex add(complex x, complex y)
{
    complex add;
    add.real=x.real+y.real;
    add.img=x.img+y.img;
    return (add);
}
int main()
{
    complex a,b,sum;
    a.real=2;
    a.img=3;
    b.real=4;
    b.img=5;
    printf("\na = %d + %di\n",a.real,a.img);
    printf("b = %d + %di\n\n",b.real,b.img);
    sum=add(a,b);
    printf("\nSum = %d + %di\n\n",sum.real,sum.img);
    return 0;
}