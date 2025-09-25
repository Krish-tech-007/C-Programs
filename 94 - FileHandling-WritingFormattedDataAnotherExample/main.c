#include <stdio.h>
#include <stdlib.h>
#define SIZE 80
int main()
{
    FILE *fp;
    fp = fopen("C:/Users/User/Documents/C Programs/emp-details-updated.txt", "r");
    if(NULL==fp){
        printf("Failed to open file.\n");
        exit(1);
    }
    char name[SIZE];
    double salary, hda;
    FILE *fpr;
    fpr = fopen("C:/Users/User/Documents/C Programs/reports-updated.txt", "w");
    if(NULL==fpr){
        printf("Failed to open file.\n");
        exit(1);
    }
    while(!feof(fp)){
        fscanf(fp, "%[^:]:%lf:%lf", name, &salary, &hda);
        salary = salary - (salary*hda);
        fprintf(fpr, "%s earns %.2lf\n", name, salary);
    }
    fclose(fpr);
    fclose(fp);
    printf("Success.\n");
    return 0;
}
