#include <stdio.h>

void main()
{
    float x, y;
    float *fp, *fp2;

    x = 6.5;

    printf("Value of x is %g, address of x %x\n", x, &x);

    fp = &x;

    printf("Vaule in memory location fp is %g\n", *fp);

    *fp = 9.2;
    printf("New value of x is %g = %g \n", *fp, x); // now they both equal 9.2 bc they are tied together (see line 12)
    *fp = *fp + 1.5; // perform arithmetic
    printf("Final value of x is %g = %g\n", *fp, x);

    /* transfer values */
    y = *fp;
    fp2 = fp;
    printf("Transfered value into y = %g and fp2 = %g \n", y, *fp2);
}
