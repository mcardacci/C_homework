#include <stdio.h>
#include <stdlib.h>

void usage(char *program_name)
{
    printf("Usage: %s <message> <# of times to repeat>\n", program_name);
    exit(1);
}

/* All you need for commmand line args is a int and pointer to array of strings */
int main(int argc, char *argv[])
{
    int i, count;
    
 //   if (argc < 3)
  //  {
    //    usage(argv[0]); // If fewer than 3 args are shown, display message and exit
    //}

    count = atoi(argv[2]);
    printf("Repeating %d times..\n", count);

    for(i=0; i < count; i++)
    {   //The %3d is left padding 3 chars deep
        printf("%3d - %s\n", i, argv[1]);
    }
}
