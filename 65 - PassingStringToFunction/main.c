#include <stdio.h>
#include <stdlib.h>
//Character arrays and pointers
//We store strings inside character arrays
//Null character has ASCII value 0

void toggleChar(char *ptr_arr){//The character pointer receives the base address to the character array or the string
    //We have a pointer to the character array in which the sentence or string is stored
    //We have to change lower case to upper case and upper case to lower case
    //We can loop till we encounter null character
    while(*ptr_arr != '\0'){
        if(*ptr_arr >= 'A' && *ptr_arr <= 'Z'){
            *ptr_arr = *ptr_arr + 32; //This converts upper case to lower case
        }
        else if(*ptr_arr >= 'a' && *ptr_arr <= 'z'){
            *ptr_arr = *ptr_arr - 32; //This converts lower case to upper case
        }

        ptr_arr = ptr_arr + 1;
        //or ptr_arr +=1;
        //or Ptr_arr++;
    }

    /*
    Alternative approach:
    int i;
    for(i = 0; *(ptr_arr + i) != '\0'; i++){ //(ptr_arr + i) gives the address of the ith element which when de-referenced gives the value of the ith element
        if(*(ptr_arr+i)>='A' && *(ptr_arr+i)<='Z'){
            *(ptr_arr+i) += 32;
        }
        else if(*(ptr_arr + i) >= 'a' && *(ptr_arr + i) <= 'z'){
            *(ptr_arr + i) -= 32;
        }
    }
    */
}
void displayString(char *ptr_arr){
    while(*ptr_arr != '\0'){
        printf("%c", *ptr_arr);
        ptr_arr = ptr_arr + 1;
    }
}
int main()
{
    //We know strings are array of characters in C
    char str[100];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str); //Accepts everything but a newline
    //^ represents any character of the keyboard
    //\n tells the scanf when to terminate
    //If it was scanf("%[^A]", str), then it would accept anything except A

    toggleChar(str);
    displayString(str);

    char s[] = "Hello";
    char *ptr = s; //Assigning the base address of character array s to character pointer ptr
    printf("\nA separate string: %s\n", s);
    ptr[0] = 'C';
    printf("Modified string: %s\n", s);

    return 0;
}
