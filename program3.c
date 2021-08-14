#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
    int arr[20];
    srand(time(0));
    int i, count;
    for(i = 0; i<20; i++)
    {
        arr[i] = rand()%100;
    }
    for(i=0;i<20;i++)
    {
        if(arr[i]%2==0)
        {
            count += 1;
        }
    }
    printf("All the numbers are : \n");
    for(i=0;i<20;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nNumber of even numbers are %d\n",count);
    return 0;
}