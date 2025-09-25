#include <stdio.h>
#include <stdlib.h>

void printBinary(int n){
    int i;
    unsigned int k = 1<<31;
    for(i=0;i<sizeof(int)*8;i++){
        if(i%8==0 && i!=0){
            printf(" ");
        }
        if((n & (k>>i)) == (k>>i)){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}
int main()
{
    int x = 5;
    printf("Before Complement\n");
    printf("Value = %d\n", x);
    printBinary(x);
    x = ~x; //Using bitwise complement operator ~
    //Bitwise complement operator is an unary operator
    //Inverts each and every bit
    printf("After Complement\n");
    printf("Value = %d\n",x);
    printBinary(x);

    //Finding 2's complement of a number
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Two's complement of %d is %d\n", n, ~n+1);
    return 0;
}
