#include<stdio.h>
int main()
{
    int n;
    int rem;
    printf("Enter any number.\n");
    scanf("%d",&n);
    int rev=0;
    int originalNumber=n;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The reverse number is %d\n",rev);
    if (originalNumber==rev)
    {
        printf("The number %d is a Palendrome.\n",originalNumber);

    }
    else
    {
        printf("The number %d is not a Palendrome.\n",originalNumber);
    }
    return 0;
}