#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isArmstrong(int);
int numberOfDigits(int);
int power(int, int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isArmstrong(num))
        printf("Armstrong number\n");
    else
        printf("Not an armstrong number\n");
    return 0;
}
int numberOfDigits(int n){
int copy = n, count = 0;
    while(copy>0){
        copy/=10;
        count++;
    }
    return count;
}
int power(int base, int power){
    int output = 1;
    for(int i = 0; i<power; i++)
        output *= base;
    return output;
}
bool isArmstrong(int n){
    int sum = 0;
    int digits = numberOfDigits(n), copy = n;
    while(copy>0){
        int digit = copy % 10;
        sum += power(digit, digits);
        copy/=10;
    }
    if(sum == n)
        return true;
    else
        return false;

}
