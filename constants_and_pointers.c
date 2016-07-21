#include <stdio.h> 
#define ANGLE_MIN 0
#define ANGLE_MAX 360

int main()
{
    static const char HELLO[] = "hello";
    char* pc;
    float* px;
    float x;

    x = 6.5;
    px = &x;
    pc = (char*) px;

    printf("\nThis is int x: %f", x);
    printf("\nThis is pointer px that points to address int x: %f", px);
    printf("\nThis uses a type cast to set px to a char. pc: %s", pc);
    // printf("\nThis is the sizeof function: %d\n", sizeof(HELLO));
    //printf("\nThese are constants ANGLE_MIN = %d\n and ANLGE_MAX = %d\n", ANGLE_MIN, ANGLE_MAX);



}
