#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double division(double,double);
double modulus(int,int);
void print_menu();
int main()
{
    int opt;
    double first,second,result;
    while(1){
        print_menu();
        scanf("%d",&opt);
        if (opt==7)
        {
            break;
        }
        if (opt<1||opt>7)
        {
            fprintf(stderr,"Invalid Menu choice\n");
            continue;
        }
        
        
        printf("\nPlease enter the first number: ");
        scanf("%lf",&first);
        printf("Please enter the second number: ");
        scanf("%lf",&second);
        switch (opt)
        {
        case 1://add
            result=first+second;
            break;
        
        case 2://sub
            result=first-second;
            break;
        
        case 3://multiply
            result=first*second;
            break;
        
        case 4://divide
            result=division(first,second);
            break;
        
        case 5://modulus
            result=modulus(first,second);
            break;
        
        case 6://power
            result=pow(first,second);
            break;
        
        
        }
        if (!isnan(result))
        {
            printf("\nResult of operation is: %.2f\n\n",result);
        }
        
        
    }

    return 0;
}
double division(double a,double b)
{
    if (b==0)
    {
        fprintf(stderr,"Invalid Argument for Division\n");
        return NAN;
    }
    else
    {
        return a/b;
    }
}
double modulus(int a,int b){
    if (b==0)
    {
        fprintf(stderr,"Invalid Argument for Moudulus\n");
        return NAN;
    }
    else
    {
        return a%b;
    }
}
void print_menu(){
    
    printf("\n------------------------------------");
    printf("\nWelcome to Simple Calculator\n");
    printf("\n");
    printf("Choose one of the following options:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. power\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    
}