#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Creating add command
//The command adds value passed from the command prompt
/*
typedef enum{
	FALSE, TRUE
}Boolean;

double stringToDouble(char* str){
	int i;
	double num = 0.0;
	Boolean flag = FALSE;
	int decimalCount = 0;
	for(i=0; *(str+i) != '\0';i++){
        char ch = *(str+i);
        int digit;
		if(ch=='.'){
			flag = TRUE;
			continue;
		}
		if(flag==TRUE)
			decimalCount++;
        char s[] = {ch,'\0'};
        digit = atoi(s);
		num = (num * 10) + digit;

	}
	for(i=0; i<decimalCount; i++){
        num/=10.0;
	}
	return num;
}
*/
//Above code is commented because we are using the inbuilt atof() function
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
