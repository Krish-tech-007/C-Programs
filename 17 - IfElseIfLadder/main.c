#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        max = a;
    } //Checking if a is the greatest
    else if (b>c){
        max = b;
    } //We know a is not the greatest, leaving b and c
    //Checking if b is the greatest
    else{
        max = c;
    } //If b is also not the greatest, then it means c is the greatest

    //If else if ladder is used when the first condition cannot help determine the direction of the program and further conditions need to be evaluated to get the desired output

    printf("The greatest number is: %d\n", max);
    return 0;
}
