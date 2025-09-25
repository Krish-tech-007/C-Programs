#include <stdio.h>
#include <stdlib.h>

int main()
{
    //The concept of logical operators remain same across programming language
    //This is because logical operators has its foundation in boolean logic of math that forms the backbone of computing

    //In C programming, there are three logical operator, useful for checking range
    //&& - Logical AND, binary, true only when both conditions are true
    //|| - Logical OR, binary, true when either of the conditions is true, false only when both conditions are false
    //! - Logical NOT, unary, inverts the input

    //The output corresponding to various inputs for the logical operators can be represented in a truth table

    //&& - AND Operator

    int i, age;
    age = 25;
    i = age>=13 && age<=19;
    printf("i = %d\n", i);

    age = 13;
    i = age>=13 && age<=19;
    printf("i = %d\n", i);

    //|| - OR Operation

    age = 9;
    i = age<=10 || age>=60;
    printf("i = %d\n", i);

    age = 25;
    i = age<=10 || age>=60;
    printf("i = %d\n", i);

    //! - NOT

    i =  !(10>5);
    printf("i = %d\n", i);

    i =  !(5>10);
    printf("i = %d\n", i);

    int a = 100, b = 70;
    i = !a>b; //A unary operator(eg: NOT) always has a higher precedence than a binary operator(eg: >)
    //Any non zero value in C is considered a true value
    //Therefore !a would be evaluated into 0
    //0>b would be false as 0 is not greater than 70
    printf("i = %d\n", i);

    return 0;
}
