#include <stdio.h>
#include <stdlib.h>
//Writing the behvaior or functions for struct types

typedef struct{
    int roll;
    char name[20];
    double gp;
}Student;

void inputStudent(Student *sp){ //Receiving the student object's address as we want to make changes to it
    printf("Enter your name: ");
    scanf("%[^\n]", sp->name);
    printf("Enter your roll no: ");
    scanf(" %d", &(sp->roll));
    printf("Enter your grade point: ");
    scanf(" %lf", &(sp->gp));
}
/*
void outputStudent(Student *sp){
    printf("Name of the student is: %s\n", sp->name);
    printf("Roll no of the student is: %d\n", sp->roll);
    printf("Grade point of the student is: %.1lf\n", sp->gp);
}
*/
//The above code is commented as we are moving to another approach (Instructor's)

void outputStudent(Student s){ //We do not need to take the student object's address here and store it in pointer
                               //This is because we do not have to make any changes to it
                               //Hence we are calling by value
    printf("Name of the student is: %s\n", s.name);
    printf("Roll no of the student is: %d\n", s.roll);
    printf("Grade point of the student is: %.1lf\n", s.gp);
}
int main()
{
    Student s;
    inputStudent(&s);
    printf("\n");
    outputStudent(s);

    return 0;
}
