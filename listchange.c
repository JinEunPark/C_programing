#include <stdio.h>

int main() {
    int list[2][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8}};
    int list2[4][2] = {{list[0][0], list[0][1]},
                       {list[0][2], list[0][3]},
                       {list[1][0], list[1][1]},
                       {list[1][2], list[1][3]}};
    for (int i = 0; i < 2; i++) {
        for (int e = 0; e < 4; e++) {
            printf("%d ", list[i][e]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int e = 0; e < 2; e++) {
            printf("%d ", list2[i][e]);
        }
        printf("\n");
    }
}
