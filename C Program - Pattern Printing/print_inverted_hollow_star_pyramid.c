#include<stdio.h>
void pattern_fun(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <=i-1; j++)
        {
            printf(" ");
        }
        int last_col=(rows*2-(2*i-1));
        for (int k = 1; k <=last_col; k++)
        {
            if (i==1||k==1)
            {
                printf("*");
                
            }
            else if (k==last_col)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
}
int main()
{
    int rows=7;
    pattern_fun(rows);
    return 0;
}