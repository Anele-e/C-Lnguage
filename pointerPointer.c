#include <stdio.h>
#include <stdlib.h>

void store_pi(int **pp) {
    // TODO: Allocate memory and assign 314 to it
    *pp = malloc(sizeof(int));
    **pp = 314;
}

int main() {
    int *p = NULL;
    store_pi(&p);
    printf("%d\n", *p); // should print 314
    free(p);
    return 0;
}

