#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if (n==1 || n==2){
        return 1; //Trivial case
    }
    else if (n==0){
        return 0; //Trivial case
    }
    else{
       return fibonacci(n-1) + fibonacci(n-2);
    }

}
int main()
{
    printf("%d", fibonacci(6));
    return 0;
}
