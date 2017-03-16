#include "stdio.h"
#include "stdlib.h"

typedef struct _Person {
    int age;
    float weight;
    void* buf;
} Person;

int main() {
    Person* personPtr = (Person*)malloc(sizeof(Person));
    personPtr->age = 30;
    personPtr->weight = 50;
    personPtr->buf = (Person*)malloc(sizeof(Person));

    if (personPtr) {
        printf("personPtr is valid!!\n");
        free(personPtr->buf);
        free(personPtr);
    } else {
        printf("personPtr is NULL!!\n");
    }
    return 0;
}
