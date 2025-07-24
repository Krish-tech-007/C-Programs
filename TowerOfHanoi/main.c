#include <stdio.h>
#include <stdlib.h>

void towerOfHanoi(int n, int source,int aux, int destination){
    if (n == 1){
        //Just pick and place
        printf("Move disc from tower no. %d to tower no. %d\n", source, destination);
        return;
    }
    //move all (n-1) discs to auxiliary
    towerOfHanoi(n-1,source,destination, aux);
    towerOfHanoi(1, source, aux, destination);
    towerOfHanoi(n-1, aux, source, destination);
}
int main()
{
    towerOfHanoi(18,1,2,3);
    //If there are n moves, 2^n - 1 number of moves
    return 0;
}


















































//N is the number of discs
//A is the starting tower
//B is the middle tower
//C is the end tower
//We have to use the Operating System's stack push and pop operation using recursion
//Goal is to transfer all discs from a to c
//N disc is always smaller than (n-1)
