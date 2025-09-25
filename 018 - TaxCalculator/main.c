#include <stdio.h>
#include <stdlib.h>

int main()
{
    float income, tax;
    printf("Enter your income: ");
    scanf("%f", &income);
    if (income < 10000){
        tax = 0;
    }
    else if (income<20000){ //Extra if condition: income>=10000 &&, not required as preceding condition checks it
        tax = (10/100.0) * income;
    }
    else if(income<50000){ //Extra if condition: income>=20000 &&, not required as preceding condition checks it
        tax = (20/100.0) * income;
    }
    else{
        tax = (25/100.0) * income;
        tax += (10/100.0) * tax;
    }
    //When multiplying something with 0.x where x is a natural number, we can simply write it as .x where x is a natural number
    //For example,
    //tax = 0.35 * income
    //This can be re-written as
    //tax = .35 * income

    printf("The tax amount is: %.2f\n", tax);
    return 0;
}
