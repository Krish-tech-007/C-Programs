#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("C:/Users/User/Documents/C Programs/data.bin","rb");
    if(NULL==fp){
        printf("Failed to open file.\n");
        exit(1);
    }
    double dataRetrieved[5];
    //In order to read a file in binary mode, we use the fread() function
    //First parameter is the address of the location where fread() is going to assign the content which should be casted as void pointer
    //Second parameter is the size of each element
    //Third parameter is the total number of elements to be read
    //Fourth parameter is the FILE pointer pointing to the address of the file which is to be read

    int nObjects = fread((void*)dataRetrieved, sizeof(double), 5, fp);
    printf("Number of elements read: %d\n", nObjects);
    int i;
    for(i=0; i<5; i++){
        printf("Element no. %d: %lf\n", i+1, dataRetrieved[i]);
    }

    fclose(fp);
    return 0;
}
