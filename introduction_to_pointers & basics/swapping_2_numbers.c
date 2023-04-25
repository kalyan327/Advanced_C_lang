#include<stdio.h>

int main()
{

    swap();
}

void swap()
{
    int temp;
    int num1=5;
    int num2=6;
    printf("first number before swap=%d\n",num1);
    printf("second number before swap=%d\n",num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("first number after swap=%d\n",num1);
    printf("second number after swap=%d\n",num2);

}
