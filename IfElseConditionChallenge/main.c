#include <stdio.h>
#include <stdlib.h>

int main()
{
    if(printf("Hello")){ //The printf statement returns the number of characters it has successfully displayed, which in this case would be 5
    //The if else condition treats any non zero value as 1, hence this condition would get evaluated
        printf(" World! \n"); //This statement is printed
    }
    else{ //Block not executed because the condition is not false
        printf("Hell!");//This statement is not executed
    }

    //The condition is reversed

    if(!printf("Hello")){ //The printf statement returns the number of characters it has successfully displayed, which in this case would be 5
    //The 5 is treated as 1 which then gets inverted to 0, hence this condition is not evaluated
        printf(" World! \n"); //This statement is not printed
    }
    else{ //Block executed because above condition is false
        printf(" Berlin\n");//This statement is executed
    }
    return 0;
}
