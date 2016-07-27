#include <stdio.h>

#define SIZE 3

void main()
{
    float x[SIZE];
    float *fp;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        x[i] = 0.5*(float)i;
        printf(" %d  %f \n", i, x[i]);
    }
    // fp is now the start of the array
    fp = x;

    for (i = 0; i < SIZE; i++)
    {
        //Here, fp gets the content from the address i locations beyond fp (bc fp points to the start of x)
        printf(" %d  %f \n", i, *(fp+i));
    }
}
