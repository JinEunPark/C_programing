#include <stdio.h>
//2차원 배열을 프린트하는 함수
//2창원 배열의 합을 구하는 함수
#define S 2// 상수 선언하는거 외워 진은아

void printArray(int(*list)[S], int colum) {
    printf("[");
    for (int i = 0; i < colum; i++) {
        for (int e = 0; e < S; e++) {
            printf("%d ", *(*(list + i) + e));//자 진은아 잘봐 가장안쪽이 행을 결정하는 거고 바깥쪽이 열을 결정하는 거여 오키?
        }
        if(i<colum-1) printf("\n");
    }
    printf("]\n");
}

int sumlist(int list[][S], int colum) {

    int sum = 0;

    for (int i = 0; i < colum; i++) {
        for (int e = 0; e <S; e++) {// 진은아 이딴 실수 다시 하면 진짜 죽여버린다.
            sum += list[i][e];
        }
    }
    return sum;
}

int main() {
    int list[2][2] = {1, 2, 3, 4};
    int array[3][2] = {1, 2, 3, 4, 5, 6};
    printf("list\n");
    printArray(list,sizeof(list)/sizeof(list[0]));
    printf("array\n");
    printArray(array,sizeof(array)/sizeof(array[0]));
    printf("\n\n\n");
    printf("list의 합: %d\n", sumlist(list,sizeof(list)/sizeof(list[0])));
    printf("array 의 합:%d\n", sumlist(array,sizeof(array)/sizeof(array[0])));


}
