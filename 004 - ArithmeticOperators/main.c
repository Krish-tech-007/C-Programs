#include <stdio.h>
#include <stdlib.h>

int main()
{
    //There are 5 arithmetic operators (+,-,/,*,%)
    //These are binary operators meaning they need two operands
    //However +,- and * have unary use as well
    //Eg: a = -2
    //Eg: a = +2
    //* can also be used as a unary operator when we use it as de-referencing operator in pointers

    int a = 10, b = 2;
    printf("%d + %d = %d\n", a,b,a+b);
    printf("%d - %d = %d\n", a,b,a-b);
    printf("%d * %d = %d\n", a,b,a*b);
    printf("%d / %d = %d\n", a,b,a/b);
    printf("%d %% %d = %d\n", a,b,a%b);

    return 0;
}
