#include<stdio.h>

int main()
{
    int num1, num2, num3, large;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>=num2)
    {
        if(num1>=num3)
        {
            large = num1;
        }
        else
        {
            large = num3;
        }
    }
    else
    {
        if(num2>=num3)
        {
            large = num2;
        }
        else
        {
            large = num3;
        }
    }
    printf("larger between %d, %d, %d is %d\n",num1,num2,num3,large);
    return 0;
}
