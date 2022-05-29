#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main() {

    int *ptr = (int *) malloc(sizeof(int));
    int *ptr2 = (int *) malloc(sizeof(int) * 7);
    *ptr = 20;

    for (int i = 0; i < 7; i++) {
        ptr2[i] = i;
    }

    printf("%d\n", *ptr);

    for (int e = 0; e < 7; e++) {
        printf("%d ", *(ptr2+e));
    }
}
