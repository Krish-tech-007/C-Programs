#include <stdio.h>
#include <stdlib.h> //Contains the exit() function
#include <stdarg.h>
#include <string.h>
//Passing variable arguments of different types

double sum(char *format, ...){
    //Considering three different types: int, float and double
    //Considering i,f and d as format specifiers for integer, floating and double type respectively
    /*
    In the sum() function, when passing a float argument to a variadic function, the float is promoted to double.
    Therefore, you should treat both float and double parameters as double when using va_arg.
    */
    double s = 0;
    va_list ap;
    va_start(ap, format);
    int i;
    for(i=0;i<strlen(format);i++){ //Assuming there is no other character in our string except the format specifiers
       char ch = *(format+i);

       if (ch=='i')
            s += va_arg(ap, int);
       else if (ch=='f' || ch=='d')
            s += va_arg(ap, double); //va_arg is a macro and it is re-writing this call by casting the ap list with double pointer
        else{
            printf("Invalid format. Terminating the program.");
            exit(1);
        }

        /*
        switch(ch){
        case 'i':
            s += va_arg(ap, int);
            break;
        case 'd':
        case 'f':
            s += va_arg(ap, double);
            break;
        default:
            printf("Invalid format. Terminating the program\n");
            exit(1);
            break;
        }
        */
    }
    va_end(ap);
    return s;
}

int main()
{
    double k;
    k = sum("idf", 1, 2.4 ,3.2f);
    printf("Sum is: %lf\n", k);
    return 0;
}
