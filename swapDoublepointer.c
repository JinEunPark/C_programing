#include <stdio.h>

void changePointer(int **pointer, int **pointer2) {
    int *tmp = *pointer;
    *pointer = *pointer2;
    *pointer2 = tmp;

}

int main() {
    int num = 20;
    int num2 = 10;
    int *p1 = &num, *p2 = &num2;
    printf("p1: %d , p2: %d\n", *p1, *p2);
    printf("p1: %p , p2: %p\n", p1, p2);

    changePointer(&p1, &p2);
    printf("\n\np1: %d , p2: %d", *p1, *p2);
    printf("\np1: %p , p2: %p", p1, p2);

}
