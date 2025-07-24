#include <stdio.h>
#include <stdlib.h>

#define MAX 30

void split(char arr[], char arr2[], char arr3[], char token){
    //arr, arr2, arr3 are nothing but pointers to the base address of the character array or string
    int tokenFound = 0; //Flag

    while(*arr != '\0'){
        if(*arr == token){
            tokenFound = 1;
            arr++;
        }
        if(!tokenFound){
            *arr2 = *arr;
             arr2++;
        }
        else{
            *arr3 = *arr;
             arr3++;
        }
        arr++;
    }

    *arr2 = '\0';
    *arr3 = '\0';

    //Alternative
    /*
    while(*ptr_arr != token){
        *ptr_arr2 = *ptr_arr;

        ptr_arr++;
        ptr_arr2++;
    }
    ptr_arr++;
    *ptr_arr2 = '\0';


    while(*ptr_arr != '\0'){
        *ptr_arr3 = *ptr_arr;

        *ptr_arr++;
        *ptr_arr3++;
    }
    *ptr_arr3 = '\0';
    */
}
int main()
{
    //Writing a function that takes input three character arrays and a character
    //The function splits the string or the character array into the second and third arrays
    //The part of the string before the character goes in the first array and the apart after the character goes in the second
    char fullName[] = "Krish*Sharma";
    char firstName[MAX];
    char lastName[MAX];
    char delimiter = '*';
    split(fullName, firstName, lastName, delimiter);
    printf("First name: %s\n", firstName);
    printf("Last name: %s\n", lastName);
    return 0;
}
