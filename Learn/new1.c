#include<stdio.h>

int main()
{
    char *ptr = "jayesh";
    printf("%s\n", *&*&ptr);
    return 0;
}
