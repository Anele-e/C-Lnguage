#include <stdio.h>

struct Engine
{
    float weight;
    float power;
};


struct Car
{
    char name[50];
    float speed;
    struct Engine carEngine;
};

void carThing(struct Car *c){
    float speedTimesEnginePower = c -> speed * c -> carEngine.power;
    printf("%.2f\n", speedTimesEnginePower); 
};

int main() {
    struct Car c = {"BMW", 12, {12.5, 45.8}};
    carThing(&c);
    return 0;
}
