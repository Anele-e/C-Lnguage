#include <stdio.h>
#include <stdlib.h>

struct Contacts
{
    char name[100];
    char phone[50];
};

int main(){
    char in[10];
    printf("How many contacts do you want to store? ");
    scanf("%s", in);
    int c = atoi(in);
    struct Contacts *mylist = malloc(c * sizeof(struct Contacts));
    struct Contacts c1;
    for (int i =0; i < c; i++)
    {
        printf("Enter name for contact %d number: ", i+1);
        scanf("%s", c1.name);
        printf("Enter phone number for contact %d number: ", i+1);
        scanf("%s", c1.phone);
        mylist[i] = c1;

    }
    
    printf("Your contacts are: \n");
    for (int i=0; i < c; i++){
        printf("%s: %s\n", mylist[i].name, mylist[i].phone);
}
    free(mylist);
    return 0;
}
