#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int roll;
    char name[20];
    double gp;
}Student;

int main()
{
    Student s; //Declared a student object s
    Student *sp; //Declared a pointer sp of type Student

    sp = &s;
    //Using the address of operator (&), we can also get the address of a struct object
    //Now the sp pointer points to the structure object
    //Using the structure pointer, we can also access the attributes of the structure object
    //If we have to access the attributes of an object through a pointer, we use the -> operator
    //Example: sp->roll = 5;
    //Instead of the dot operator(.) it would be the arrow operator(->)

    //When we are supposed to pass structure address to a function, we will accept the address in structure pointer
    //And we will be using the arrow operator(->) to access the attributes through the pointer
    sp->roll = 50;
    printf("Enter your name: ");
    scanf("%[^\n]", sp->name);
    printf("Welcome %s\n", sp->name);

    return 0;
}
