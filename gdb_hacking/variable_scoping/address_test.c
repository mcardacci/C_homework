#include <stdio.h>

int main()
{
    int i = 3;
    
    printf("[int in main] i @ %p = %d\n", &i, i);
    printf("This should be same 0x%08x = %d\n", &i, i);
}
