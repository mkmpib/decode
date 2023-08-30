#include <stdio.h>

int main()
{

    int a = 23;
    int *ptr;
    ptr = &a; //$a is store the address of ptr
    printf("The address of ptr pointer is %x\n", &ptr);
    printf("The value of a is %d\n", *ptr);
    printf("The address of a is %x\n", &a);
    printf("The address of a is %x\n", ptr);
    printf("The value of a is %d\n", a);
    printf("The value of stored at address %x is %d\n", ptr, *ptr);
}