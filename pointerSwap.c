#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // Compare strings, based on ASCII values
            if (strcmp(arr[i], arr[j]) > 0) {
                // Swap pointers
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char *names[] = {"Plato", "Aristotle", "Euclid", "Pythagoras"};
    int count = sizeof(names) / sizeof(names[0]);

    sortStrings(names, count);

    printf("Sorted names:\n");
    for (int i = 0; i < count; ++i) {
        printf("%s\n", names[i]);
    }

    return 0;
}

