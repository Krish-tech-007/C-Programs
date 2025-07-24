#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool isPrime(int n){
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
int sumOfPrimes(int lb, int ub){
    int count, sum;
    for(count = lb, sum = 0; count<=ub; count++){
        if(isPrime(count))
            sum += count;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPrime(num))
        printf("Prime Number\n");
    else
        printf("Not a prime number\n");

    printf("The sum of all prime numbers from 10 - 200 is: %d", sumOfPrimes(10,200));
    return 0;
}
