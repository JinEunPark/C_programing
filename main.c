#include <stdio.h>

void printList(int (*list)[2], int colum) {
    printf("[");
    for (int i = 0; i < colum; i++) {
        for (int e = 0; e < 2; e++) {
            printf("%d ", list[i][e]);
        }
        printf("\n");
    }
    printf("]");
}

int main() {
    int list[3][9];
    for (int i = 0; i < 3; i++) {
        for (int e = 1; e < 10; e++) {
            list[i][e] = (i + 1) * e;
        }
    }
//    printList(list,3);

    int A[2][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8}};
    int B[4][2];
    for (int i = 0; i < 2; i++) {
        for (int e = 0; e < 4; e++) {
            B[e][i] = A[i][e];
        }
    }
    printList(B, 4);

}
