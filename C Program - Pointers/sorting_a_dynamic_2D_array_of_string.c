#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(char** names,int n)
{
    int i,j;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (strcmp(names[j],names[j+1])>0)
            {
                char* temp;
                temp=(char*)calloc(30,sizeof(char));
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
            
        }
        
    }
    
}
int main()
{
    char** names;
    int n,i;
    printf("Enter the number of names to be printed\n");
    scanf("%d",&n);
    printf("Enter names\n");
    names=(char**)calloc(n,sizeof(char*));
    for (int i = 0; i < n; i++)
    {
        names[i]=(char*)calloc(30,sizeof(char));
        scanf("%s",names[i]);
    }
    sort(names,n);
    printf("\n Array after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",names[i]);
    }
    
    return 0;
}