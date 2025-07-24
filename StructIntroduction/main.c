#include <stdio.h>
#include <stdlib.h>

//Creating our own datatype using the struct keyword
/*
struct Student{ //Student is the tag for the type
    //We will be using Student to create allocation
    //When are creating the type, it is only a description/template, it is not allocation
    //Allocation only takes place when we create the object
    int roll;
    char name[20];
    double gp;

};//Semicolon should be at the end of the struct block
*/
//Instead of writing struct Student everytime while creating an object of type Student, we can create an alias using the typdef keyword
//Example of typedef:
typedef int integer;
//We can create an alias of a valid datatype using the typedef keyword
//Here integer is an alias of datatype int
//We can create convenient aliases for datatypes

//Similarly, we can create an alias for struct Student using the typedef keyword
//typedef struct Student Student;
//Syntax for typedef
//typedef Existing Datatype Alias;

//Instead of creating the structure first and then the alias, we can do both together

typedef struct Student{
    int roll;
    char name[20];
    double gp;
} Student;
//We can now create an object of the Student datatype using struct Student as well as just Student
//Further, this is also valid
/*
typedef struct{
    int roll;
    char name[20];
    double gp;
} Student;
*/
//If we do not have any tag for the structure, then the typedef renames the structure declaration as the alias
//If we do not have any tag, we cannot create objects using struct TagName format because there is no tag
//In this case, we can create objects only using the Alias
int main()
{
    //We have many inbuilt datatypes in the compiler
    //However they may not always be sufficient to represent all forms of data
    //Eg: We do not have an inbuilt datatype to represent complex numbers or employee data or student data

    //When we encounter such problems of having to use data that is not inbuilt in the compiler
    //We can create our own datatype using the struct keyword
    //These datatypes are known as user defined datatypes

    //We need to consider two things while creating our own datatype: it's attribute and behaviour
    //Attribute is a value that describes the domain of the type
    //For example, when we consider human as a datatype, height is an attribute but smile is a behaviour
    //For example, when we consider student as a datatype, roll no. is an attribute but studying is a behaviour

    //While creating our own datatype, we must consider both it's attributes and it's behaviours
    //For example, we have the int datatype
    //It comes with it's operations as well, such as +,-,/,*,%
    //Similarly if we create our own datatype, it's our responsibility to supply operations as well

    //Creating the object of type Student
    //struct Student s1, s2, s3; //s1, s2 and s3 are objects of type Student
    Student s1, s2, s3;
    //Syntax of creating an object: struct TagName object_name;
    //These are real allocations for Student type
    //There will be three allocations and each would consist of whatever we describe inside the structure
    //For instance, roll takes 4 bytes, name takes 20 bytes and gp takes 8 bytes, so in total: 32 bytes per object

    //We can access the attributes of an object with the help of the dot operator (.)
    //Syntax: object_name.attribute

    s1.roll = 5;
    s2.roll = 10;
    s3.roll = 15;

    s1.gp = 10;
    s2.gp = 9.9;
    s3.gp = 9.6;

    //We can also define operations for the object such as printing grade based on grade point or the gp attribute

    //Creating an int variable using the alias integer
    integer x = 10;
    printf("Value of x: %d\n", x);


    return 0;
}
