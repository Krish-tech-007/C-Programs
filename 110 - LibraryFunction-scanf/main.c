#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Necessary for the function sscanf()
int main()
{
    char string[] = "Bob 16 40.5";
    char name[30];
    int age;
    double weight;

    sscanf(string, "%s %d %lf", name, &age, &weight);
    //Similar to scanf except the first parameter is the source string from where we read the data
    printf("Name: %s\n", name);
    printf("Age is: %d\n", age);
    printf("Weight is: %.2lf\n", weight);

    char string2[] = "Name: John Age: 18 Weight: 40";
    char name2[30];
    int age2;
    double weight2;
    sscanf(string2, "%*s %s %*s %d %*s %lf", name2, &age2, &weight2); //* means sscanf will ignore that part
    printf("Name: %s\n", name2);
    printf("Age: %d\n", age2);
    printf("Weight: %.2lf\n", weight2);
    return 0;
}
