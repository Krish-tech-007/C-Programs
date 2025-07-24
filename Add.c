#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	if(argc==1){
		printf("No value provided. Terminating the program.\n");
		exit(1);
	}
	int i;
	double sum = 0;
	for(i=1; i<argc;i++){
            //sum += stringToDouble(*(argv+i));
            //Instead of writing our own function, we can also use the inbuilt atof(const char*) function
            sum += atof(*(argv+i));
	}
	printf("The sum is: %lf\n", sum);
	return 0;
}
