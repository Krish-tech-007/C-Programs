#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("C:/Users/User/Documents/C Programs/file.txt", "a");
    if(fp==NULL){
        printf("Failed to open file.\n");
        exit(1);
    }
    fputc('\n', fp);
    char text[] = "Appended the file successfully";
    int i;
    for(i=0;*(text+i)!='\0';i++){
        fputc(*(text+i), fp);
    }
    printf("Success.\n");
    fclose(fp);
    return 0;
}
