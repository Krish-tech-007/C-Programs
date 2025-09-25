#include <stdio.h>
#include <stdlib.h>

int main()
{
    //In a for loop, the initialization of counter variable, termination condition and the modification of the counter variable is written in a compact way in for loop at one place
    int i;
    for(i=0; i<10;i++)//{ If the body of the for loop contains a single statement, then the curly braces can be ommited
        printf("Hello World!\n");
    //}
    //First the initialization section is executed, only once

    //Then the termination condition is checked before entering the body of the loop
    //If true, the body of the for loop is executed, else the loop is terminated
    //Then the value of the counter variable is updated
    //This cycle repeats

    //For and While loops are entry controlled loops and do while loop is exit controlled loop
    //In the initialization section and the modification section, we can have more than one statements separated with comma operator
    printf("\n");
    for(i=0, printf("Hi\n"); i<10;i++, printf("Dave\n"))//{ If the body of the for loop contains a single statement, then the curly braces can be omitted
    //Comma operator is left to right associative, hence it gets executed left to right
        printf("Hello World!\n");


    //We can also make the initialization section blank and write it before the for loop
    //Example:
    /*
    int i;
    i = 0;
    for(;i<10;i++){
        printf("Hello World\n");
    }
    */

    //We can also make the updation section blank and write it at the end of the for loop's body
    //Example:
    /*
    int i;
    i = 0;
    for(;i<10;){
        printf("Hello World\n");
        i++;
    }
    */

    //Two semicolons are mandatory

    //Sum of first n natural numbers

    int n, sum, j; //By default, any variable that is declared but not initialized contains garbage value
    printf("Enter n for printing the sum of the first n natural numbers: ");
    scanf("%d", &n);
    for(j = 1, sum = 0; j<=n; sum+=j, j++);
        //sum+=j;
    printf("The sum of the first %d natural numbers is: %d", n, sum);
    return 0;
}
