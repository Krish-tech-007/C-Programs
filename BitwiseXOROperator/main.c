#include <stdio.h>
#include <stdlib.h>

void printBinary(int n){
    int i;
    unsigned int k = 1<<31;
    for(i=0;i<sizeof(int)*8;i++){
        if(i!=0 && i%8 == 0)
            printf(" ");
        if((n&(k>>i))==(k>>i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
int main()
{
    int x = 5;
    int y = 2;
    int z = x ^ y;
    //00000000 00000000 00000000 00000101
    //00000000 00000000 00000000 00000010
    //-----------------------------------
    //00000000 00000000 00000000 00000111
    //Result will be 7
    printf("z = %d\n", z);
    //It gives high when the inputs are different
    //Use of XOR operator: Toggle set into unset and toggle unset into set bit

    //General formula: x^(2 to the power i), then the ith bit would be toggled
    printBinary(z);
    return 0;
}
