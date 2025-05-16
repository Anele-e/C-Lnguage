#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int size) {
    char *temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
        // SORT IN DESCENDING ORDER
        // COMPARE THE STRINGS USING STRCASECMP FOR CASSE INSENSITITY
            if (strcasecmp(arr[j], arr[j + 1]) < 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *words[] = {"siya", "xola", "Fiona", "denzel", "Zola"};
    int n = sizeof(words) / sizeof(words[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    sortStrings(words, n);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}

