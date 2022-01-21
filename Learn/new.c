#include<stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("%ld", (ptr2-ptr1));
    printf("%ld", (char*)ptr2 - (char*) ptr1);
    return 0;
}