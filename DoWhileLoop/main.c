#include <stdio.h>
#include <stdlib.h>

int main()
{
    //In do-while loop, the termination condition is checked at the end of each iteration
    int i = 1;
    do{
        printf("Hello World\n");
        i++;
    }while (i<=3); //Semicolon is required to terminate the loop
    //Even if the initial condition is false, the do while loop is executed atleast once

    //Example use of do while loop:
    int age;
    char choice;

    do{
        printf("Enter age: ");
        scanf("%d", &age);

        (age>=13 && age<=19) ? printf("Teenager\n") : printf("Not a teenager\n");

        printf("Do you want to continue: [y/n]\n");
        scanf(" %c", &choice);
    } while(choice != 'n' && choice != 'N');
    return 0;
}
