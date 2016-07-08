#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) /* argc (arg count) should be 2 for correct execution */
    {
        /* We print argv[0] assuming it is the program name */
        printf("usage: %s filename", argv[0]);
    }
    else
    {
        //We assume argv[1] is a filename to open
        FILE *file = fopen(argv[1], "r");

        /* fopen returns 0, the NULL pointer, on failure */
        if (file == 0)
        {
            printf("Could not open file. \n");
        }
        else
        {
            int x;
            /* read one char at a time from file, stopping at EOF */
            while((x=fgetc(file)) != EOF)
            {
                printf("%c", x);
            }
            fclose(file);
        }
    }
}
