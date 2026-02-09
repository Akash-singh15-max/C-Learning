#include<stdio.h>
int main()
{
    int arr1[]={8,2,3,4,5,6,7,1};
    int arr2[]={4,5,7,11,6,1};
    int i,j,flag,x,k=0;
    int result[100];
    printf("Common element are: ");
    for (int i = 0; i < sizeof(arr1)/4; i++)
    {
        for (int j = 0; j < sizeof(arr2)/4; j++)
        {
            if (arr1[i]==arr2[j])
            {
                flag=0;
            }
            for (int x = 0; x < k; x++)
            {
                if (result[x]==arr1[i])
                {
                    flag++;
                }
                
            }
            if (flag==0)
            {
                result[k]=arr1[i];
                printf("%d ",result[k]);
                k++;
            }
            
        }
        
    }
    
    return 0;
}