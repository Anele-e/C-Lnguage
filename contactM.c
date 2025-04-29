#include <stdio.h>
#include <stdlib.h>

struct Contacts
{
    char name[100];
    char phone[50];
};

int main(){
    char input[10];
    int count;
    printf("How many contacts do you want to store? ");
    scanf("%d", &count);
    
    struct Contacts *mylist = malloc(count * sizeof(struct Contacts));
    if (mylist == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    struct Contacts c1;
    for (int i =0; i < count; i++)
    {
        printf("Enter name for contact %d : ", i+1);
        scanf("%s", mylist[i].name);
        printf("Enter phone number for contact %d number: ", i+1);
        scanf("%s", mylist[i].phone);

    }
    
    printf("Your contacts are: \n");
    for (int i=0; i < count; i++){
        printf("%s: %s\n", mylist[i].name, mylist[i].phone);
}
    free(mylist);
    return 0;
}
