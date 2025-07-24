#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //long t = time(NULL);
    //srand(t);
    //It can also be directly written as
    srand(time(NULL));
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n], sum=0, i;

    for(i = 0; i<n; arr[i] = rand()%100, sum += arr[i], i++);
    for(i = 0; i<n; printf("%4d", arr[i]), i++);
    //The %4d format specifier refers to the width reserved in which the number will get printed in the output
    //It is going to reserve 4 characters for the number
    //Therefore each number will be printed on 4 character columns
    //This may ensure alignment
    //The numbers will be printed right alligned
    double average = (double)sum/n;
    printf("\nThe sum is: %d\n", sum);
    printf("The average is: %lf\n", average);


    return 0;
}
