#include <stdio.h>

void MinMax(int **max, int **min, int array[]) {
    *max = &array[0];
    *min = &array[0];
    for (int i = 0; i < 5; i++) {
        if (array[i] > **max) {
            *max = &array[i];
        }
        if (array[i] < **min) {
            *min = &array[i];
        }
    }
}

void findmax(int **maxptr, int **minptr, int array[]) {
    int *max, *min;
    max = min = &array;
    for (int i = 0; i < 5; i++) {
        if (*max < array[i]) {
            max = &array[i];
        }
        if (*min > array[i]) {
            min = &array[i];
        }
    }
    *maxptr = max;
    *minptr = min;
}
void printa(int *(list)){
    for(int i  =0; i<5; i++){
        printf("%d ",list[i]);
    }
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *maxPtr;
    int *minPtr;
    MinMax(&maxPtr, &minPtr, array);
    printf("M:%d m:%d", *maxPtr, *minPtr);
    printa(array);

}
