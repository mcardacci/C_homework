#include <stdio.h>
/*
struct database {
    int id_number;
    int age;
    float salary;
};

int main()
{
    struct database employee;  -----------There is now an employee var that has modifiable variables in it 

    employee.age = 22;
    employee.id_number = 1;
    employee.salary = 12000.21;
} */

struct xampl {
    int x;
};

int main()
{
    struct xampl structure;
    struct xampl *ptr;

    structure.x = 12;
    ptr = &structure; /* using '&' address assignment operator to point 'ptr' to structure */
    
    printf("%d\n", ptr->x); /* Assumes you're already inside structure, no need to put structure.x again */

    getchar();
}
