#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    //Using the C library function scanf to take input from the user
    printf("x=%d, y=%d\n", x, y);

    int i;
    printf("Enter two integers: ");
    i = scanf("%d %d", &x, &y);
    //According to the documentation of scanf, upon its successful completion, it returns the number of values it scans from the keyboard successfuly
    printf("x=%d, y=%d, i=%d\n", x, y, i);

    return 0;
}
