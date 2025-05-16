#include <stdio.h>
#include <stdlib.h>


int main(){
    char *words[] = {"one", "two", "three", "four"};
    int l = 0, r = 3;
    char *temp;
    // Reverse the array
    // swap the first and last elements, then the second and second last, and so on
    // until the middle of the array is reaches
    while (l < r)
    {
        temp = words[l];
        words[l] = words[r];
        words[r] = temp;
        l++;
        r--;
    }

    //print the reversed array
    for (int i = 0; i < 4; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}