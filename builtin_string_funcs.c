#include <stdio.h> /* stdin, printf, and fgets */
#include <string.h> /* string funcs come from this header file */

/* this func removes the newline from the end of a string entered using fgets */

void strip_newline(char *str, int size)
{
    int i;
    /* '++i' returns incremented value first 'i++' returns original value and increments on the next cycle */
    for (i = 0; i < size; ++i) {
        if (str[i] == '\n')
        {
            /* if char is a newline, make it null char */
            str[i] = '\0';
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

    /* strcmp returns zero when the two strings are equal */
    if (strcmp (name, "Chicken") == 0 ) 
    {
        printf("Thats my name too \n");
    }
    else
    {
        printf("We don't have the same name\n");
    }
    //Find the length of your name
    printf("Your name is %d letters long", strlen(name));
    printf("Enter your last name: ");
    fgets(lastname, 50, stdin);
    strip_newline(lastname, 50);
    fullname[0]='\0';

    // strcat looks for the null char '\0' and adds the second string starting at that location
    strcat(fullname, name); //copy name into fullname
    strcat(fullname, " "); 

    //------------------------UNFINISHED START HERE-----------------------------

}
