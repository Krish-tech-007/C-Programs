#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2 dimensional array is a tabular structure where we have row column orientations
    //Syntax: datatype nameOfVariable[no.of rows][no.of columns];
    //If we want to access a particular element in a 2D array, then we need to provide it's row index and column index\

    //Practically a 2D array is not a tabular structure in the primary memory
    //Rows are continuously allocated one after the other in the primary memory
    //After one row ends, the second row immediately begins

    //We can iterate through the elements of a 2D array using nested loops
    int x[4][3], i, j;
    for(i=0;i<4;i++)
    for(j=0;j<3;x[i][j]=i*j,j++);

    for(i=0;i<4;printf("\n"), i++)
        for(j=0;j<3;printf("%4d",x[i][j]), j++);

    return 0;
}
