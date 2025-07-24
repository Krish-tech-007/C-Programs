#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> //Contains the clock() function
//Finding out the execution time of a program, a function or any specific part of the program.

long fib(int t){
    if(t == 0)
        return 0;
    if(t == 1)
        return 1;
    else
        return fib(t-1) + fib(t-2);
}
int main()
{
    //The clock() function returns the number of ticks the processor does since the beginning of execution of the program
    long tick1 = clock();
    printf("Number of ticks since the start of the program: %ld\n", tick1);
    //We can use the clock() function to find out the execution time of a particular function or a portion of a program
    long sum = 0;
    int i;
    long start_tick = clock(); //Just before the start of the loop
    for(i=0;i<35;i++){
        sum += fib(i);
    }
    long end_tick = clock(); //Right after the loop ends
    long ellapsed_ticks = end_tick - start_tick; //Not the execution time because it is not in seconds
    printf("Clock ticks used: %ld\n", ellapsed_ticks);

    //In order to find out the time taken to run that particular block of code
    //We need to divide the elapsed number of ticks with a constant CLOCKS_PER_SEC to get the elapsed time
    //The constant CLOCKS_PER_SEC is a constant that represents the number of clock ticks per second

    double elapsed_time = (double)ellapsed_ticks/CLOCKS_PER_SEC;
    printf("Time required to execute the loop: %lf seconds\n", elapsed_time);



    return 0;
}
