#include<stdio.h>

int main()
{
    int nums[15];
    int i, large;
    for(i=0;i<15;i++)
    {
        scanf("%d",&nums[i]);
    }
    large = nums[0];
    for(i=1;i<15;i++)
    {
        if(nums[i]>large)
        {
            large = nums[i];
        }
    }
    printf("All the numbers are : \n");
    for(i=0;i<15;i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\nThe largest number is %d\n",large);
    return 0;
}