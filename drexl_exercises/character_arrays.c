#include <stdio.h>

void main()
{
    char text_1[100], text_2[100], text_3[100];
    char *ta, *tb;
    int i;

    //let the compiler decide on the string literal size
    char message[] = "Hello, I am a string; what are you?";

    printf("Original message: %s\n", message);

    //copy the message to text_1 the hard way
    i = 0;
    while ( (text_1[i] = message[i]) != '\0' )
    {
        i++;    
    }
    printf("Text_1: %s\n", text_1);

    //Use explicit pointer arithmetic
    ta = message;
    tb = text_2;
    
    while( (*tb++ = *ta++ ) != '\0')
    {
        ;
    }
    printf("Text_2: %s\n", text_2);
}
