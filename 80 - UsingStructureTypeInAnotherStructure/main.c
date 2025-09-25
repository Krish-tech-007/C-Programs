#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int day, month, year;
}Date;

typedef struct{
    int eno;
    char name[20];
    double basic;
    Date dob;
}Employee;

void inputDOB(Date *dp){
    char DOB[20];
    dp->day = 0;
    dp->month = 0;
    dp->year = 0;

    printf("Enter your DOB in DD/MM/YYYY: ");
    scanf(" %[^\n]", DOB);

    char *ptr = DOB;
    while(*ptr!='/'){
        dp->day = (dp->day*10) + ( ((int)(*ptr)) - 48);
        *ptr++;
    }
    ptr++;
    while(*ptr!='/'){
        dp->month = (dp->month*10) + (((int)*ptr)-48);
        *ptr++;
    }
    ptr++;
    while(*ptr!='\0'){
        dp->year = (dp->year*10) + (((int)*ptr)-48);
        *ptr++;
    }
}

void inputEmployee(Employee *ep){
    printf("Enter your name: ");
    scanf("%[^\n]", ep->name);
    inputDOB(&(ep->dob));
    printf("Enter your employee number: ");
    scanf("%d", &(ep->eno));
    printf("Enter your basic pay: ");
    scanf("%lf", &(ep->basic));
}

void displayEmployee(Employee ep){
    printf("Employee name is %s\n", ep.name);
    printf("Employee DOB is %d/%d/%d\n", ep.dob.day, ep.dob.month, ep.dob.year);
    printf("Employee no: %d\n", ep.eno);
    printf("Employee basic pay is: %lf\n", ep.basic);
}

int main()
{
    Employee e;
    inputEmployee(&e);
    displayEmployee(e);
    return 0;
}
