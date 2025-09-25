#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = -1, b = 10, c;
    c = ++a && ++b; //&& operator is left to right associative
    //The first part of the statement which is ++a gets evaluated first and results in 0 which means false
    //The AND operator is false when either or all conditions are false
    //The next part of the statement is therefore not executed because the condition is short circuited
    //Hence the value of b is never incremented

    //Short circuit feature is in both AND and OR operator
    printf("a = %d, b = %d, c = %d\n",a, b,c);

    a = 5, b = 6;
    c =  ++a || ++b;//|| operator is left to right associative
    //The first part of the statement which is ++a gets evaluated first and results in 1 which means true
    //The OR operator is false when all conditions are false
    //The next part of the statement is therefore not executed because the condition is short circuited
    //Hence the value of b is never incremented
    printf("a = %d, b = %d, c = %d\n",a, b,c);
    return 0;
}
