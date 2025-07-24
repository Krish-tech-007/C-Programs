#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number upto which sum of natural numbers are to be displayed: ");
    scanf("%d", &n);
    int i, sum = 0;
    i = 1;
    while (i<=n)//{
    //Curly braces not required as only single statement is there under while
        sum += i++; //Same expression, use of postfix operator
        //i++;
    //}
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}
