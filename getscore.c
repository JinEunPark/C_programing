#include <stdio.h>

#define CRT_SECURE_NO_WARNINGS

void printArray(int (*list)[5], int colum) {
    printf("[");
    for (int i = 0; i < sizeof(list[0]) / sizeof(int); i++) {
        for (int e = 0; e < colum; e++) {
            printf("%d ", list[i][e]);
        }
        if(i < 4)
        printf("\n");
    }
    printf("]");
}
void get_score(int(*score)[5],int colum,int size){

    for (int i = 0; i < (sizeof(score[0])/sizeof(int))-1; i++) {
        printf("%d 번 학생의 점수를 입력하세요:",i+1);
        for (int e = 0; e < size-1; e++) {
            scanf("%d", &score[i][e]);
            getchar();
        }
    }

    int sum = 0;
    int sumT = 0;

    for(int i = 0; i< (sizeof(score[0])/sizeof(int))-1; i++){

        for(int e = 0; e<4; e++){
            sum += score[e][i];
        }
        score[i][size-1] = sum;
        score[size-1][i] = sum;
        sumT += sum;
        sum = 0;
    }
    score[size-1][size-1] = sumT;
}
int main() {
    int score[5][5];
    get_score(score,5,5);
    printArray(score,5);
    printf("%d",sizeof(score[0])/sizeof(int));

}
