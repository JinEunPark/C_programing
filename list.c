#include <stdio.h>
int main(){
    int list[3][9];
    for(int i = 2; i<5; i++){
        for(int e = 1; e< 10; e++){
            list[i-2][e-1] = i*e;
        }
    }
    for(int i = 0; i< 3; i++){
        for(int e = 0; e<9; e++){
            printf("%d ",list[i][e]);
        }
        printf("\n");
    }
}
