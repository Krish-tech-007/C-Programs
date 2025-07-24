#include <stdio.h>
#include <stdlib.h>

int main()
{
    //We may need to execute a block of code if a particular condition is true
    //Otherwise execute another block of code if the condition is false
    //This is called branching and is implemented using if else

    //Finding maximum of two numbers
    int a, b, max;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);

    if(a>b){
        max = a;
    }
    else{
        max = b;
    }
    printf("Maximum is %d\n",max);

    //Finding if entered age belongs to teenage bracket or not
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if (age>=13 && age<=19){
        printf("Teenage\n");
    }
    else{
        printf("Not teenage\n");
    }

    //If we have only one statement under the if and else block, we can omit the curly braces
    //But if we have more than one statements, curly braces become mandatory

    return 0;
}
