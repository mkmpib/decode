#include <stdio.h>
struct student
{
    int id;
    float marks;
    char favchar;
};
int main()
{
    struct student mohit, rohit, harry;
    mohit.id = 1;
    mohit.marks = 567;
    mohit.favchar = 'm';
    rohit.id = 2;
    rohit.marks = 677;
    rohit.favchar = 'h';
    printf("The id of harry is %d:\n", mohit.id);
    printf("The Marks of harry is %f:\n", mohit.marks);
    // printf("The Fevcharacter of harry is %c:\n", mohit.fevchar);
    return 0;
}
