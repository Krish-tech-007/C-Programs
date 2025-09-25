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

    //To write formatted data, we use fprintf()
    //The first parameter is the file pointer
    //The remaining parameters are same as printf()
    int salary;
    char name[SIZE];

    FILE *fpr;
    fpr = fopen("C:/Users/User/Documents/C Programs/reports.txt", "w");
    if(fpr==NULL){
        printf("Failed to open file.\n");
        exit(1);
    }

     while(!feof(fp)){
        fscanf(fp, " %[^,],%d", name, &salary);
        fprintf(fpr,"Name: %s and Salary: %d\n", name, salary);
    }

    fclose(fp);
    fclose(fpr);
    printf("Success.\n");
    return 0;
}
