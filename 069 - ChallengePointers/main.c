#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = {10,20,30};
    int *ptr, k;
    ptr = x;
    printf("%lu\n", ptr); //Unsigned integer

    k = ++(*ptr); //Stores 11
    printf("k=%d *ptr=%d ptr=%lu x[0]=%d x[1]=%d x[2]=%d\n",k, *ptr, ptr, x[0], x[1], x[2]);
    //k=11, *ptr=11, ptr=x, x[0]=11, x[1]=20, x[2]=30
    //Correct guess

    k = *++ptr; //Stores 20
    printf("k=%d *ptr=%d ptr=%lu x[0]=%d x[1]=%d x[2]=%d\n",k, *ptr, ptr, x[0], x[1], x[2]);
    //k=20, *ptr=20, ptr=x+4, x[0]=11, x[1]=20, x[2]=30
    //Correct Guess

    k = *ptr++; //postfix increment or decrement has higher priority than * operator, hence ptr++ would be evaluated first
    //k = *(&x[2])
    //Thus k should store 30
    printf("k=%d *ptr=%d ptr=%lu x[0]=%d x[1]=%d x[2]=%d\n",k, *ptr, ptr, x[0], x[1], x[2]);
    //k=30, *ptr=30, ptr=x+8, x[0]=11, x[1]=20, x[2]=30

    //Wrong guess
    //Correction: k should be 20

    //Explanation:
    //Postfix operator means substitute the current value first and then operate(increment/decrement)
    //ptr is pointing to the second element of the array before, hence it is de-referenced first and then the pointer is incremented
    //Hence k=20, *ptr=30, ptr=x+8, x[0]=11, x[1]=20, x[2]=30
    //Basically, the ptr is de-referenced first, it's value assigned to k and then the ptr is incremented by 1 * 4 bytes

    k = (*ptr)++; //ptr is current equal to x[2], hence it's value get's de-referenced
    //Postfix increment is to be operated on it, as a result, it stores the value 30 then increments the value of x[2] by 1
    printf("k=%d *ptr=%d ptr=%lu x[0]=%d x[1]=%d x[2]=%d\n",k, *ptr, ptr, x[0], x[1], x[2]);
    //k = 30, *ptr=31, ptr=x+12, x[0]=11, x[1]=20, x[2]=31

    //Wrong guess
    //Correction: ptr should be x+8 as the pointer is not incremented

    return 0;
}
