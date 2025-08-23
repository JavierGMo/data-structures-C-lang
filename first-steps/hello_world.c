#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 90, c = 10;
    int *p;
    printf("Hello world %d\n", p);
    p = &a;
    printf("Hello world %d, %d, %d\n", p, *p, &a);
    *p = 12;
    printf("Hello world %d, %d, %d\n", p, *p, a);
    return 0;
}
