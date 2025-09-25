#include <stdio.h>
#include <stdlib.h>

void printBinary(int n){
    int i;
    unsigned k = 1 << 31;
    for(i=0;i<sizeof(int)*8;i++){
         if(i%8==0 && i!=0){
            printf(" ");
         }
         if((n&(k>>i))==(k>>i)){
            printf("1");
         }
         else{
            printf("0");
         }
    }
    printf("\n");
}

void ZeroToOne(int n){
    int i;
    unsigned k = 1 << 31;
    for(i = 0; i<sizeof(int)*8; i++){
        n = n | (k>>i);
    }
    printBinary(n);
}
int main()
{
    int x = 10; //00000000 00000000 00000000 00001010
    int y = 7;  //00000000 00000000 00000000 00000111
    int z = x | y; //Bitwise OR is performed
                //00000000 00000000 00000000 00001111
    //z = 15
    printf("z = %d\n", z);
    printBinary(z);
    //If there is atleast one high value, the output would be high
    //Only if no value is high, will the output will be low

    //Use of bitwise OR operator
    //We can use it to set an unset bit if it is 0 and retain the bit if it's 1
    //We just have to loop through the bitwise configuration and using bitwise OR on the number with a bit representation of 1 being shifted by i
    ZeroToOne(0);
    return 0;
}
