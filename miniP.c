#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Packet {
    int intData;
    float floatData;
    char label[8];
};

void testUnion(union Packet *p) {
    p->intData = 100;
    printf("Int: %d\n", p->intData);
    p->floatData = 12.5;
    printf("Float: %.2f\n", p->floatData);
    strcpy(p->label, "Feynman");
    printf("Label: %s\n", p->label);
}



int main() {
    union Packet p;

    testUnion(&p);
    return 0;
}