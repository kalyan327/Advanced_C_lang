#include <stdio.h>
#include <stdlib.h>


void find_min_and_max(int num1,int num2,int*pMax,int*pMin)
{
    if (num1>num2)
    {
        *pMin = num2;
        *pMax = num1;

    }
    else
    {
        *pMin = num1;
        *pMax = num2;
    }
}
int main()
{
    int a = 5, b=7;
    int max,min;

    find_min_and_max(a,b,&max,&min);

    printf("Max between %d and %d is %d\n",a,b,max);
    printf("Min between %d and %d is %d\n",a,b,min);

}
