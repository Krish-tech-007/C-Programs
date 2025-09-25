#include <stdio.h>
#include <stdlib.h> //Declaration of the library function rand is  in the standard library
#include <time.h>
int main()
{
    //Generating Random Numbers
    //Using the library function rand which when called returns a pseudo random number each time
    //We have to change the seed at the beginning of the program
    long t;
    t = time(NULL); //There is a function time that gives us the time at the current moment
    //Instead of null, we can also supply the address of some variable to which the value of the time will be assigned to
    //It will return the time as the number of seconds elapsed since the epoch
    //Epoch is the origin from which the computer starts counting time
    //In C language, epoch is the number of seconds since 1 January 1970
    srand(t);
    //For changing the seed of the rand function, we have another function present inside the same header file
    int k, i;
    for(i = 0; i<10; i++){ //Generating 10 random numbers
        //If we want random numbers only upto a certain number digits, then we can use the modulo operator accordinnly
        k = rand(); //Upto two digits
        printf("k = %d\n",k);
    }
    //It is not being purely pseudo random as it is generating the same series again and again
    //In order to rectify that and get a different series, we need to change the default seed, the value on which the rand function operates on by default
    //We have to change the seed each time we are calling the rand function
    //The seed needs to be dynamically changed each time
    //One thing that is constantly changing on our computer is the time
    //Therefore in this case, we will be using the time value as the seed for the rand function each time the code is executed
    return 0;
}
