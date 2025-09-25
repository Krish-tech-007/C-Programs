#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Unary increment: ++, increases the value of a variable by 1
    //Unary decrement: --, decreases the value of a variable by 1

    //The unary operator (increment/decrement) can either be postfixed/prefixed to the variable
    //If there is only a single unary operator operating on a single operand in an expression and nothing else in the expression, then postfix or prefix won't make any difference

    //The meaning differs if there is any other operator in the expression

    //Postfix notation means the original value is substituted and then increased/decreased
    //Prefix notation means the original value is increased/decreased and then substituted

    int a = 5, i;
    i = ++a; //Pre-increment
    //a is incremented by 1 first
    //Then the updated value of a will be assigned to i

    printf("a = %d, i = %d\n", a, i);

    a = 5;
    i = a++; //Post-increment
    //Initial value of a will be assigned to i first
    //Then a is incremented by 1

    printf("a = %d, i = %d\n", a, i);

    a = 5;
    int b = 6;
    i = a++ * b++;

    printf("a = %d, b = %d, i = %d\n", a, b, i);

    a = 5;
    b = 6;
    i = ++a * b++;

    printf("a = %d, b = %d, i = %d\n", a, b, i);

    a = 5;
    b = 6;
    i = ++a * ++b;

    printf("a = %d, b = %d, i = %d\n", a, b, i);


    a = 5;
    printf("a = %d\n", a++);
    printf("a = %d\n", a);
    printf("a = %d\n", ++a);

    return 0;
}
