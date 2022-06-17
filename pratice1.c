#include <stdio.h>
#include<stdlib.h>
#include <time.h>

void makeArray(int array[][5], int colum) {

    srand((unsigned) time(NULL));

    for (int i = 0; i < 5; i++) {
        for (int e = 0; e < colum; e++) {
            array[i][e] = rand() % 100;
        }
    }

}

void printArray(int array[][5], int colum) {
    printf("[");
    for (int i = 0; i < 5; i++) {
        for (int e = 0; e < colum; e++) {
            if(i <5 && e<4)printf("%d, ", array[i][e]);
            else{
                printf("%d",array[i][e]);
            }
        }
        if(i<4)printf("\n");
    }
    printf("]\n");
}

void changeArray(int array[][5], int colum) {
    int *mina = &array[0][0];
    int *maxa = &array[0][0];
    int max = array[0][0];
    int min = array[0][0];
    for (int i = 0; i < 5; i++) {
        for (int e = 0; e < 5; e++) {
            if(min>array[i][e]){
                min = array[i][e];
                mina = &array[i][e];
            }
            if(max<array[i][e]){
                max = array[i][e];
                maxa = &array[i][e];
            }
        }
    }
    *mina = max;
    *maxa = min;
}

int main() {
    int array[5][5];
    makeArray(array[5], 5);
    printArray(array[5],5);
    printf("\n\n\n\n\n");
    changeArray(array[5],5);
    printArray(array[5],5);


}
