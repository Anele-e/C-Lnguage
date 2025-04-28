#include <stdio.h>

int myStrLen(const char *s) {
    // Use a pointer to walk through the string
    int c = 0;
    const char *ptr;
    ptr = s;
    while (*ptr != '\0')
    {
        c += 1;
        ptr += 1;
    }

    return c;
}

int main() {
    const char *name = "Gauss\0y";
    printf("Length: %d\n", myStrLen(name));
    return 0;
}

