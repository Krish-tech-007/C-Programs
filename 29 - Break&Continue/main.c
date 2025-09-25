#include <stdio.h>
#include <stdlib.h>

int main()
{
    //break and continue are keywords
    //We may need to terminate the loop prior to the termination condition becoming false, for that the break keyword is used
    //We may also need to skip over an iteration of the loop, for that we use the continue keyword

    //Example of break keyword
    int count;
    char choice;
    for(count = 1; count<=100; count++){
        printf("Count = %d\n", count);
        printf("Do you want to continue[y/n]: ");
        scanf(" %c",&choice);
        if(choice =='n' || choice == 'N')
            break;
    }
    printf("Terminated at count: %d\n", count);

    //break keyword can also be used in switch case
    //Whenever the break keyword is encountered, the control breaks out of the loop
    //However continue keyword is used exclusively within a loop block and we cannot use it outside of a loop block
    //Whenever the continue keyword is encountered, the current iteration is skipped and the next iteration begins

    for(count = 1; count<=100; count++){
        if(count%2==0)
            continue;
        //Ignores the even numbers and prints only the odd numbers
        printf("Count = %d\n", count);
    }
    return 0;
}
