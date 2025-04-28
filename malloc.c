#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char greet(){
    char *give = malloc(16);
    strcpy(give, "Hello, Plato!");
    printf("%s\n", give);
    
    free(give);
}

int main() {
    greet();
   
    return 0;
}
