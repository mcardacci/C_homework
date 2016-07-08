#include <stdio.h>

int main()
{
    char string[256];
    int i;
    printf("Please enter a long string: ");

    /* notice stdin being passed in*/
    fgets(string, 256, stdin);
    
    for (i = 0; i < 256; i++) 
    {
        if (string[i] == '\n')
        {
            string[i] = '\0';
            break;
        }
    }

    printf("You entered a very long string, %s", string);

    getchar();
}
