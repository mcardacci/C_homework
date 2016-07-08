#include <stdio.h>      
#include <string.h>

void strip_newline(char *str, int size)
{
    int i;
    
    /* remove null terminator */
    for(i=0; i < size; ++i)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            /*this will kill off the rest of the string, we're done*/
            return;
        }
    }
}

int main()
{
    char name[50];
    char lastname[50];
    char fullname[100];

    printf("Please enter your name: ");
    fgets(name, 50, stdin);
    strip_newline(name, 50);

    /* strcmp returns 0 when two strings are equal (case sensitive) */
    if (strcmp(name, "Marco") == 0)
    {
        printf("Hey thats my name too!\n");
    }
    else
    {
        printf("We don't have the same name..\n");
    }
    //Find the length of your name.
    printf("Your name is %d letters long.", strlen(name));
    printf("Enter your last name: ");
    fgets(lastname, 50, stdin);
    strip_newline(lastname, 50);

    fullname[0] = '\0';
    //'strcat' will look for the \0 and add the second string starting at that location.
    strcat(fullname, name); //destination, src
    strcat(fullname, " "); // separate lastnames by a space
    strcat(fullname, lastname);

    printf("Your full name is %s\n", fullname);

    getchar();
    return 0;
}
