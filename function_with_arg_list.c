#include <stdarg.h>
#include <stdio.h>

/* This function will take the number of values 
   followed by all of the numbers to average */

double average(int num, ...)
{
    va_list arguments;
    double sum = 0;

    /* Initializing arguments to store all values after num */
    va_start(arguments, num);
    /* Sum all the inputs; we still rely on the function caller to tell us how many inputs there are */
    for (int x = 0; x < num; x++) 
    {
        sum += va_arg(arguments, double);
    }
    va_end(arguments); //cleans up list
    
    return sum / num;
}

int main()
{
    /* computes the average of 13.2, 22.3 and 4.5 (3 indicates the number of values to average) */
    printf("%f\n", average(3, 13.2, 22.3, 4.5));
    /* another example */
    printf("%f\n", average(5, 3.3, 2.2, 1.1, 5.5, 3.3));
}
