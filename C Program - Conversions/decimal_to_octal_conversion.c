#include<stdio.h>
void decToOctal(int n)
{
    //array to store octal number
    int octalNum[100];
    //counter for octal number array
    int i=0;
    while (n!=0)
    {
        octalNum[i]=n%8;
        n=n/8;
        i++;
    }
    //printing octal number array in reverse order
    for (int j = i-1; j >=0; j--)
    {
        printf("%d",octalNum[j]);
    }
    
}
int main()
{
    int n=33;
    decToOctal(n);

    return 0;
}