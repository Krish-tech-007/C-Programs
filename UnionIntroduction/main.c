#include <stdio.h>
#include <stdlib.h>

//Processing union within structure
//Using the union keyword, we can create user-defined types for some special cases

typedef union{
    double weight;
    int size;
    char color[10];
    //We are declaring the attributes that are alternating in nature
}Description; //Description is the name of the union
//Within an union, only the maximum sized attribute is allocated
//In this case, 10 bytes would be allocated for the union type as color attribute is the maximum sized attribute
//In those 10 bytes, we could store either of those attributes because they need memory equal or less than 10 bytes

typedef struct{
    int ino;
    char iname[30];

    /*
    double weight;
    int size;
    char color[10];
    */
    //Either weight, size or color would be used.
    //All three won't be used simultaneously
    //In such cases, union types will be used

    Description d; //Declaring a Description object within Item
    char dtype; //Variable to keep track of what is actually there within the description object
    //While using union in a structure, we need to declare a variable to keep a track of which alternating value we are making use of

    double price;
}Item;

void inputItem(Item *ip){
    printf("Enter Item Name: ");
    scanf("%[^\n]", ip->iname);
    printf("Enter Item No: ");
    scanf("%d", &ip->ino);
    printf("Enter price: ");
    scanf("%lf", &ip->price);
    printf("Enter w for Weight, s for Size, c for Color: ");
    scanf(" %c", &ip->dtype);

    if(ip->dtype == 'w'){
        printf("Enter Weight: ");
        scanf(" %lf", &(ip->d.weight));
    }
    else if(ip->dtype == 's'){
        printf("Enter Size: ");
        scanf(" %d", &(ip->d.size));
    }
    else{
        printf("Enter color: ");
        scanf(" %[^\n]", ip->d.color);
    }

}

void printItem(Item i){
    printf("Item Name: %s\n", i.iname);
    printf("Item No: %d\n", i.ino);
    printf("Item Price: %.2lf\n", i.price);

    if(i.dtype == 'w'){
        printf("Item Weight: %.2lf\n", i.d.weight);
    }
    else if(i.dtype == 's'){
        printf("Item Size: %d\n", i.d.size);
    }
    else{
        printf("Item color: %s\n", i.d.color);
    }
}
int main()
{
    Item item; //Declaring an Item object here
    item.d.size = 7; //10 bytes are used to store the size
    item.d.weight = 48.5; //If we write this, then the 10 bytes would get overwritten
    //Now object d is containing weight

    inputItem(&item);
    printf("\n");
    printItem(item);
    return 0;
}
