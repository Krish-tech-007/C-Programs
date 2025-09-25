#include <stdio.h>
#include <stdlib.h>
#define SIZE 80
int main()
{
    FILE *fp;
    fp = fopen("C:/Users/User/Documents/C Programs/emp-details.txt", "r");
    if(fp==NULL){
        printf("Failed to open file.\n");
        exit(1);
    }
    //We will use fscanf() function to read formatted data from a text file
    //First parameter is the FILE pointer
    //Rest of the parameters are same as the scanf function
    char name[SIZE];
    int salary;
    while(!feof(fp)){
        fscanf(fp, " %[^,],%d", name, &salary);
        //Stores all characters uptil , is encountered in name character array
        //fscanf() terminates the reading when it encounters the ,
        //fscanf() needs to keep the ,
        //Then we use the %d for the salary

        /*
        This particular line of code is using fscanf to read a string and an integer from a file. Here's a brief breakdown of what each component does:
        fp is the file pointer.
        " %[^,],%d" is the format string:
        " %[^,]" reads a string up to the next comma.
        "%d" reads an integer.
        name is the variable to store the string.
        &salary is the variable to store the integer.*/

        /*
        Here’s a breakdown:
        %[^,]: This part reads a string of characters up to, but not including, the first comma. It stores this string in the variable name.
        ,: The first comma in the format string acts as a literal character that fscanf expects to encounter in the input. It essentially tells fscanf to skip over the comma in the input data.
        %d: This part reads an integer value and stores it in the variable &salary.
        */

        printf("Name: %s and Salary: %d\n", name, salary);
    }
    printf("Success.\n");
    fclose(fp);
    return 0;
}
