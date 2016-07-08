#include <stdio.h>

void recurse(int count)
{
    printf("%d\n", count);
    recurse(count + 1);
}

void count_to_ten(int count)
{
    if (count < 10)
    { 
        printf("Count: %d\n", count);
        count_to_ten(count + 1);
    }
}

int main()
{
    //recurse(1); /* First function call so it starts at 1 */ 
    count_to_ten(0);
    return 0;
}
