#include <stdio.h>
#include <stdlib.h>

char toUpperCase(char ch){
    if(ch>='a' && ch<='z')
        return ch-32;
    else
        return ch;

}

char toLowerCase(char ch){
    if(ch>='A' && ch<='Z')
        return ch+32;
    else
        return ch;
}

/*
void toUpperCase(char *str){
    int i;
    for(i=0;*(str+i)!='\0';i++){
        if(*(str+i)>='a' && *(str+i)<= 'z')
            *(str+i) -= 32;
    }
}

void toLowerCase(char *str){
    int i;
    for(i=0;*(str+i)!='\0';i++){
        if(*(str+i)>= 'A' && *(str+i)<= 'Z'){
            *(str+i) +=32;
        }
    }
}
*/
void changeCase(char(*fnptr)(char), char *str){
    int i;
    for(i=0;*(str+i)!='\0';i++){
        *(str+i) = fnptr(*(str+i));
    }
}
int main()
{
    char str[100];
    int choice;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    printf("1. Uppercase\n2. Lowercase\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    char (*ptr)(char);
    switch(choice){
        case 1:
            ptr = toUpperCase;
            changeCase(ptr, str);
            break;
        case 2:
            ptr = toLowerCase;
            changeCase(ptr, str);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    printf("String is: %s\n", str);
    return 0;
}

//Use: When we have a general function but don't know what to do with the data
