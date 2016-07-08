#include <stdio.h>
#include <stdlib.h>

struct node {
    int x;
    struct node *next;
};

int main()
{
    /*This is the unchanging first node */
    struct node *root;

    /* This will point to each node as it traverses the list */
    struct node *conductor;

    root = malloc(sizeof(struct node));
    root->next = 0;
    root->x = 12;
    conductor = root;
    if (conductor != 0) 
    {
        printf("Conductor: %u\n", conductor);
        while(conductor->next != 0)
        {
            conductor = conductor->next;
            printf("Conductor: %d\n", conductor);
        }
    }
    /* Create a node at the end of the list */
    conductor->next = malloc(sizeof(struct node));
    
    conductor = conductor->next;  
    printf("Print me Conductor: %d", conductor->next);

    if (conductor == 0)
    {
        printf("Out of memory");
        return 0;
    }
    /* initialize the new memory */
    conductor->next = 0;
    conductor->x = 42;
    
    return 0;
}
