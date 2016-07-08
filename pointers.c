#include <stdio.h>

int main()
{
    int x; /* normal int*/
    int *p; /* A pointer to an integer */

    p = &x; /* This can be read like, "Assign the address of x to p" */
    scanf("%d", &x);
    printf("%d\n", *p);
    getchar();
}
