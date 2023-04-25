#include<stdio.h>


int main()
{
    int a=5;
    int *p; // pointer declaration
    p=&a; 

    printf("The actual value of a is:%d\n",a);
    printf("The address of actual value of a is:%p\n",&a);
    printf("The address of actual value of a is:%p\n",p); // same result obtained when using &a
    printf("Dereferencing the using pointer actual value of a is:%d\n",*p); // Dereferencing the actual value using pointers

}
