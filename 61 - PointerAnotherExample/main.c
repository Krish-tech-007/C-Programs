#include <stdio.h>
#include <stdlib.h>

void computeSumAndMeanAndMaximum(int a, int b, int c, int* sum, int* mean, int* max){
    *sum = a + b + c;
    *mean = (*sum) / 3;
    if(a>b && a>c)
        *max = a;
    else if(b > c)
        *max = b;
    else
        *max = c;

}
int main()
{
    int a = 10, b = 20, c = 30, sum = 0, mean = 0, max = 0;
    computeSumAndMeanAndMaximum(a, b, c, &sum, &mean, &max);
    //Another issue with functions is that we cannot return more than one values
    //This can be solved using pointers
    printf("The sum is: %d\n", sum);
    printf("The mean is: %d\n", mean);
    printf("The maximum value is: %d\n", max);

    return 0;
}
