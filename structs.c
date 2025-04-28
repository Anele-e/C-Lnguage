#include <stdio.h>

struct Student
{
    float gpa;
};

void boostGPA(struct Student *s) {
    s -> gpa += 0.5;
    printf("%.2f\n", s->gpa);
}

int main() {
    struct Student s = {3.0};
    boostGPA(&s);
    return 0;
}


