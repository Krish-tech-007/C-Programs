#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Relational operators are used to compare values
    //In C programming language, we have 6 relational operators
    //<,>,==,<=,>=,!=
    //They compare the operands and give the output in terms of true(1) and false(0)
    int i;
    i = 50>10; //1
    printf("i=%d\n",i);
    i = 10<5; //0
    printf("i=%d\n",i);
    int a = 50, b = 100;
    i = a==b; //0
    printf("i=%d\n",i);
    i = a!=b; //1
    printf("i=%d\n",i);
    i = a>=b; //0
    printf("i=%d\n",i);
    i = a<=b; //1
    printf("i=%d\n",i);
    return 0;
}
