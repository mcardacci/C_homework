#include <stdio.h>

void function()
{
    int var  = 5;
    static int static_var = 5;

    printf("\t[in function] var = %d\n", var);
    printf("\t[in function] static_var = %d\n",static_var);
    var++; //Add one to var
    static_var++; // Add one to static var
}

int main() 
{
    int i;
    static int static_var = 1337; // Another static in a different context

    for(i = 0; i < 5; i++)
    {
        printf("[in main] static_var = %d\n", static_var);
        function(); // Function call
    }
}
