#include <stdio.h>
//Command Line Arguments
int main(int argc, char **argv){ //Standard formal argument in order to receive the command line parameter
				 //The name of these arguments are predefined and fixed
				 //The types are also fixed, we cannot have a different datatype
				 //The name of the variables can be different
				 //argc stands for argument count and argv stands for argument vector
				 //argc receives the total number of parameters that is passed from the command prompt
				 //argc receives the base address of each argument
				 //argc is an array of character pointers that is assigned by the Operating System
				 //argc is the base address of an array of character pointers
				 //each argument that we pass is in receieved in a character array
				 //We do not need to write any specefic code for the allocation of these arrays
				 //The base address of these arrays are receieved in their corresponding character pointers
				 //Or in other words the elements of argv
				 //The first element points to the first array, the second element points to the second array and so on
				 
	printf("Number of parameters passed from command prompt: %d\n", argc); 
	//The output would be number of parameters + 1(for the name of the object file)
	printf("Name of the output file: %s\n", argv[0]);
	printf("Printing all the parameters receieved\n");
	int i;
	for(i=0; i<argc;i++){
		printf("Argument %d: %s\n", i, *(argv+i));
	}
}
//If we have to pass strings:
//If it does not have any spaces, we can directly type it
//If it has spaces, we need to enclose it within double quotes