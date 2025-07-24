#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    int alphaCount = 0, spaceCount = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if((str[i]>= 'a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            alphaCount++;
        else if(str[i] == ' ')
            spaceCount++;
    }
    printf("Number of alphabets in the sentence: %d\n", alphaCount);
    printf("Number of spaces in the sentence: %d\n", spaceCount);
    return 0;
}
