#include <stdio.h>
#include <stdlib.h>
#define SIZE 8 //Creating a macro named SIZE to hold the value 8
//The compiler will replace all instances of SIZE in the code with 8 before executing
//This process is known as macro expansion

//When taking array as an argument to the function
//We can also declare it in formal parameters in the following way: int array_name[] instead of int *array_name
//For example: void stimulation(int[]arr);

void stimulation(int*);
void stimulationForNDays(int*, int);
void displayArray(int*, int);
void copyArray(int*, int*, int);

void stimulation(int *ptr_arr){
    //We know the size of each colony or array is eight
    int i;
    int elementBefore, elementAfter;
    int arr[SIZE];
    for(i = 0; i<SIZE; i++){
        elementBefore = *(ptr_arr+i-1);
        elementAfter  = *(ptr_arr+i+1);

        if(i == 0)
            elementBefore = 0;
        else if(i == 7)
            elementAfter = 0;

        if(elementBefore == elementAfter)
            *(arr+i) = 0;
        else
            *(arr+i) = 1;
    }

    for(i = 0; i<SIZE; i++){
        *(ptr_arr+i) = *(arr+i);
    }
}
void stimulationForNDays(int *ptr_arr, int days){
    int i, n=0;
    int elementBefore, elementAfter;
    int arr[SIZE];

    while(n<days){

        for(i = 0; i<SIZE; i++){
            elementBefore = *(ptr_arr+i-1);
            elementAfter  = *(ptr_arr+i+1);

                 if(i==0)
                elementBefore = 0;
            else if(i==7)
                elementAfter = 0;

            if(elementBefore == elementAfter)
                *(arr+i) = 0;
            else
                *(arr+i) = 1;
        }

        n++;

        printf("Colony after %d days: ", n);
        copyArray(ptr_arr, arr, SIZE);
        displayArray(ptr_arr, SIZE);
    }
}
//Alternatively

void eight_colony_stimulation(int arr[], int days){
    int i, n = 1;
    int left, right;
    int temp[SIZE];
    while(n<=days){
        for(i=0;i<SIZE;i++){
            left = (i==0) ? 0 : arr[i-1];
            right = (i==SIZE-1) ? 0 : arr[i+1];
            temp[i] = (left==right) ? 0 : 1;
        }
        for(i=0;i<SIZE;i++){
        arr[i] = temp[i];
        }
        printf("Colony after %d days: ", n);
        displayArray(arr, SIZE);
        n++;
    }
}

void copyArray(int *ptr_destination_arr, int *ptr_source_arr, int size){
    int i;
    for(i = 0; i<size; i++){
        *(ptr_destination_arr+i) = *(ptr_source_arr+i);
    }
}

void displayArray(int *ptr_arr, int n){
    int i;
    for(i = 0; i<n; i++){
        printf("%d ", *(ptr_arr+i));
    }
    printf("\n");
}

int main()
{
    int colony[] = {1,0,0,1,1,1,0,1};
    /*displayArray(colony, 8);
    stimulation(colony);
    displayArray(colony, 8);
    stimulation(colony);
    displayArray(colony, 8);*/

    stimulationForNDays(colony, 4);

    printf("\n");
    int colony2[] = {1,0,0,1,1,1,0,1};
    eight_colony_stimulation(colony2, 4);

    /*
    Rules:
    There are 8 rooms side by side in a colony.
    In each of the room, there lives a creature.
    The state of the creature can either be active or inactive, which can represented by 1 and 0 respectively.
    For example the colony could look like:
     0   1   2   3   4   5   6   7  <- Room no.
    [1] [0] [0] [1] [1] [1] [0] [1] <- State (0: Inactive, 1: Active)

    The state of the creatures depend on their neighbors.
    Depending on the states of their left as well as right neighbors, the creature may change it's state or retain it's state the following day.
    The state of the creature is calculated based upon the state of it's left as well as right neighbors.
    For the creature in room no. 0 as well as the creature in room no. 7, the left and right missing neighbor respectively are both considered to be 0.
    (0) [1] [0] [0] [1] [1] [1] [0] [1] (0)

    If the state of both the neighbors of a creature is same, then the creature will become inactive the next day.
    If the state of both the neighbors of a creature is not same, then the creature will become active the next day.

    Applying the rules on the given example, we get,
    (0) [1] [0] [0] [1] [1] [1] [0] [1] (0)   <- Day 0
        [0] [1] [1] [1] [0] [1] [0] [0]       <- Day 1
        [1] [1] [0] [1] [0] [0] [1] [0]       <- Day 2
    */
    return 0;
}
