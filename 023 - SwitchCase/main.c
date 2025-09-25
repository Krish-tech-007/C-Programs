#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Alternative to if else if ladders
    //Switch case is suitable for equality based comparisons

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    //Example using if else if else
    if(num==1)
        printf("One\n");
    else if (num==2)
        printf("Two\n");
    else if (num == 3)
        printf("Three\n");
    else
        printf("Invalid Input\n");


    //Using switch case
    switch(num){ //We can only have integer or character type variable inside the switch
    //We cannot use real data type inside switch
    //We can compare the contents of the variable with constants
    //We cannot compare the value of the variable inside the switch with the value of any other variable outside the switch case instead of a constant
    //The compiler would give us an error if we try to compare the concerned variable with some other variable inside the switch case

    //All statements inside the switch block must be inside a case only
    case 1: printf("One\n");
            break; //To prevent fall through
            //When the break keyword is encountered, the control shifts outside of the switch case structure
            //If we have a common task for two or more cases, then we can deliberately allow for fall through to happen as a feature of the program
            //Fall through continues till it encounters a break keyword or the switch case is over

    case 2: printf("Two\n");
            break;

    case 3:printf("Three\n");
            break;

    //We can write the cases in any order, for example case 3 first then case 1 and then case 2

    default: printf("Invalid Input\n");
             break;
             //It is not mandatory to write break for default case if it is the last case in the switch case structure
             //The default case can also be written at the top however in that case, the break keyword will be necessary if we want to avoid fallthrough
             //Since if the default case is at the top, it would be the first case to be checked

    }

    //Teenage program using switch case
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch(age){
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19: printf("You are a teenager\n");
             break;
    default:
        printf("You are not a teenager\n");
        break;
    }

    //If we want to test or check ranges, if else if else ladder is more suitable than switch

    return 0;
}
