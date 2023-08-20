// a void ptr is a ptr that has no data type associate with it, can be easily typecast to any ptr
#include <stdio.h>
int main()
{
    int x = 345;
    float y = 8.4;
    void *p;
    p = &x;                                        // void pointer stores address of int 'x'
    printf("The value of a is %d\n", *((int *)p)); // *((int *)p) is a integer pointr (typecasted), normal *p won't work as it is a void pointer and can't be dereferece directly.
     p = &y;                                        // void pointer stores address of int 'y'
    printf("The value of b is %f\n", *((float *)p));
    return 0;
}