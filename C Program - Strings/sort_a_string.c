#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static int mycompare(const void* a,const void* b)
{
    return strcmp(*(const char**)a,*(const char**)b);
}
void sort(const char* arr[],int n)
{
    qsort(arr,n,sizeof(const char*),mycompare);
}
int main()
{
    const char* arr[]={"akash","akaa","vishal"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Given array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: %s \n",i,arr[i]);
    }
    sort(arr,n);
    printf("\nsorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: %s \n",i,arr[i]);
    }
    
    return 0;
}