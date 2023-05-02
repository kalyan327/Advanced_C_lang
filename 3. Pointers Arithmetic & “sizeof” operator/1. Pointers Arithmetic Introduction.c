#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int grades[3]={80,90,100};
    printf("grades start at: %p\n", grades);

    printf("grades: %d\n", *grades);

    printf("address: %p\n", &grades[0]);

    printf("address: %p\n", &grades[1]);

    printf("address: %p\n", &grades[2]);

    printf("grades start at: %p\n", grades);

    printf("grades start at: %p\n", grades+1);

    return 0;
}
