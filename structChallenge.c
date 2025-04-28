#include <stdio.h>

struct Contact
{
    char name[50], phone[20];
    int age;
};

void printAllContact(struct Contact myArray[]){
    for (int i = 0; i < 3; ++i)
    {
        printf("%s: %s\n", myArray[i].name, myArray[i].phone);
    }
}
void printContactOver25(struct Contact myArray[]){
    for (int i = 0; i < 3; ++i)
    {
        if (myArray[i].age > 25){
            printf("%s: %s\n", myArray[i].name, myArray[i].phone);
        }
    }
}

int main() {
    struct Contact myArray[3] = {{"Jake", "+27 75 703 3525", 37}, {"Paul", "+27 65 405 3425", 20}, {"John", "+27 85 752 3578", 30}};
    printAllContact(myArray);
    printContactOver25(myArray);
    return 0;
}

