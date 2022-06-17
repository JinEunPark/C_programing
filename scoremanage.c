#include <stdio.h>

int main() {
    int list[5][5];
    for (int i = 0; i < 4; i++) {
        for (int e = 0; e < 4; e++) {
            scanf("%d ", &list[i][e]);
        }
    }
    static int totalsum = 0;

    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int e = 0; e < 4; e++) {
            sum += list[i][e];
        }
        list[4][i] = sum;
        list[i][4] = sum;
        totalsum += sum;
    }


    list[4][4] = totalsum;

    for (int i = 0; i < 5; i++) {
        for (int e = 0; e < 5; e++) {
            printf("%d ", list[i][e]);
        }
        printf("\n");
    }
}
