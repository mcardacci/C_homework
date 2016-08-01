#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *errorchecked_malloc(unsigned int);  // Function prototype for errorchecked_malloc()

int main(int argc, char *argv[])
{
    char *char_ptr; 
    int *int_ptr;
    int mem_size;

    if (argc < 2)
    {
        mem_size = 50;  // Use 50 as default value if no CLI args present
    }
    else
    {
        mem_size = atoi(argv[1]);
    }

    printf("\t[+] allocating %d bytes of memory on the heap for char_ptr\n", mem_size);
    char_ptr = (char *) errorchecked_malloc(mem_size);

    strcpy(char_ptr, "this is memory located on the heap");
    printf("char_ptr (%p) --> %s\n", char_ptr, char_ptr);
    printf("\t[+] allocating 12 bytes of memory on the heap for int_ptr\n");
    int_ptr = (int *) errorchecked_malloc(12);

    *int_ptr = 31337;
    printf("int_ptr (%p) --> %d\n", int_ptr, *int_ptr);

    free(char_ptr);
    free(int_ptr);
    
}

void *errorchecked_malloc(unsigned int size)
{
    void *ptr;
    ptr = malloc(size);
    if (ptr == NULL) 
    {
        fprintf(stderr, "Error: could not allocate memory. \n");
        exit(-1);
    }
    return ptr;
}
