#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 2;
    float r;
    r = a/b; //An operation performed between two integer results in an integer only
    //If there is an operation being performed between two variables, the result would be in the type with the higher precedence
    //Precedence in ascending order: char, int, long, float, double, long double
    //In the above example if we convert at least one variable to floating point then the result would be floating point as well
    //This is achieved using type casting
    //Here we ask the compiler to forcefully convert a value of one type to another, this is known as explicit casting
    printf("r = %f\n", r);
    r = (float) a / b;
    printf("r = %f\n", r);
    return 0;
}
