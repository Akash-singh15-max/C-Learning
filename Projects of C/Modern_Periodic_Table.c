#include<stdio.h>
int main()
{
    int n,m,a;
   
    

    printf("\nWelcome to Modern Periodic Table\n\n");
    printf("> Enter 1 to know about element\n\n");
    printf("> Eneter 2 to close the periodic table\n\n");
    printf("ENTER\n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("> Enter 3 to search the element by atomic number\n\n");
        printf("ENTER\n");
        scanf("%d",&m);
        if (m==3)
        {
            printf("Enter the atomic number of the element to be searched: ");
            scanf("%d",&a);
            if (a==1)
            {
                printf("Name : Hydrogen\n");
                printf("Symbol : H\n");
                printf("Atomic Number : 1\n");
                printf("Electronic Configuration : 1s^1\n");
                printf("Discovered By : Henry Cavendish\n");
                printf("Charge : +1\n");
            }
            
        }
        
    }
    else if (n==2)
    {
        printf("You exit the Modern Periodic Table\n");
    }
    

    return 0;
}