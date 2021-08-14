#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int arr[20];
    srand(time(0));
    int i, j;
    for(i = 0; i<20; i++)
    {
        arr[i] = 1 + rand()%100;
    }
    printf("All the numbers are : \n");
    for(i=0;i<20;i++)
    {
        printf("%d  ",arr[i]);
    }
    for(i=0;i<19;i++)
    {
        for(j=0;j<20-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    printf("\nThe numbers after sorting are : \n");
    for(i=0;i<20;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");

    return 0;
}