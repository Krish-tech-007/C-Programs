#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("C:/Users/User/Documents/C Programs/data.bin", "rb");
    if(NULL==fp){
        printf("Failed to open file.\n");
        exit(1);
    }
    //Sometimes, we need to know the number of elements or records stored in a binary file
    //We can do so using the ftell() function
    //ftell() function returns the number of bytes written upto FILE pointer location
    //If we use the ftell() function while the FILE pointer points to the beginning of the file, it would return 0
    //If we use the ftell() function while the FILE pointer points to the end of the file, it would return the size of the file
    //We can make the FILE pointer point to the end of the file using the fseek() function
    fseek(fp, 0L, SEEK_END);
    long size;
    size = ftell(fp);
    printf("Total size of the file: %ld bytes\n", size);

    int n;
    n = size / sizeof(double);
    printf("Number of elements/records in the file: %d\n", n);

    //In a binary file, the size of each record is usually fixed
    double *data;
    data = (double *)malloc(size);

    fseek(fp, 0L, SEEK_SET);
    int i;
    for(i=0; i<n; i++){
        fread((void*)(data), sizeof(double), n, fp);
    }

    for(i=0;i<n;i++){
        printf("Element no. %d: %lf\n", i, *(data+i));
    }

    free(data);
    fclose(fp);
    return 0;
}
