#include <stdio.h>

int main()
{
    /* The (char) is a typecast, telling the computer to interpret the 65 
    as a char and not as number. It is going to give the ASCII equivalent
    to the number 65, 'c'. Note that the '%c' is the format code for printing
    a single character */
    printf("c%\n", (char)65);
    getchar();
}
