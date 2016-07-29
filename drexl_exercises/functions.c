#include <stdio.h>
#include <string.h>

int n_char(char string[])
{
    int n;
    n = strlen(string);

    if (n > 50)
    {
        printf("String is longer than 50 characters\n");
    }
    return n;
}


void main()
{
    int n;
    char string[50];

    strcpy(string, "Helsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssso World");

    // Function call
    n = n_char(string);
    printf("Length of string = %d\n", n);
}
