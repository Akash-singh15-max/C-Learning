#include<stdio.h>
struct InchFeet
{
    int feet;
    float inch;
};
void findSum(struct InchFeet arr[],int N)
{
    // variable to store sum
    int feet_sum=0;
    float inch_sum=0.0;
    int x;
    // Traverse the InchFeet array
    for (int i = 0; i < N; i++)
    {
        // find the total sum of feet and inch
        feet_sum+=arr[i].feet;
        inch_sum+=arr[i].inch;
    }
    // If inch sum is greater then 11 then conver it into feet as 1 feet = 12 inch
    if (inch_sum>=12)
    {
        // find integral part of inch_sum
        x=(int)inch_sum;
        // delete the integral part x
        inch_sum-=x;
        // add x%12 to inch_sum
        inch_sum+=x%12;
        // add x/12 to feet_sum
        feet_sum+=x/12;
    }
    // Print the corresponding sum of feet_sum and inch_sum
    printf("\nFeet Sum: %d\n",feet_sum);
    printf("Inch Sum: %.2f\n\n",inch_sum);
    
}
int main()
{
    struct InchFeet arr[]={{10,3.7},{10,5.5},{6,8.0}};
    int N = sizeof(arr)/sizeof(arr[0]);
    findSum(arr,N);
    return 0;
}