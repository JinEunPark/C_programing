#include <stdio.h>

void getdataFromUser(int *list);

static void showList(int *list);

void findMost(int *list, int *count, int *mostList);

void printMostlist(int *list, int count); // 중복된 값은 프린트 하지 않는 리스트 출력함수.

int main() {
    int list[10];
    int count = 0;
    int mostList[10] = {NULL};
    getdataFromUser(list);
    showList(list);
    int *p = &count;
    findMost(list, p, mostList);
    printMostlist(mostList, count);


}

void getdataFromUser(int *list) {

    for (int i = 0; i < 10; i++) {
        printf("%d 번째 정수를 입력하세요", i + 1);
        scanf(" %d", &list[i]);
    }
}

void showList(int *list) {
    printf("[");
    for (int i = 0; i < 10; i++) {
        printf("%d ", list[i]);
        if (i != 9) {
            printf(",");
        }
    }
    printf("]\n");
}

 void findMost(int *list, int *count, int *mostList) {

    int listCount[10] = {0};

    for (int i = 0; i < 10; i++) {
        for (int e = 0; e < 10; e++) {
            if (list[i] == list[e]) {
                listCount[i]++;
            }
        }
    }

    int max = listCount[0];

    for (int i = 0; i < 10; i++) {
        if (max < listCount[i]) {
            max = listCount[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (listCount[i] == max) {
            mostList[i] = list[i];
        } else {
            mostList[i] = NULL;
        }
    }
    *count = max;
}

void printMostlist(int *list, int count) {
    printf("빈도: %d 값은 : ", count);
    for (int i = 0; i < 10; i++) {
        if (list[i] != NULL) {
            if (i == 0) {
                printf(" %d,", list[i]);
            }
            if ((i != 0) && list[i] != list[i - 1]) {
                printf(" %d,", list[i]);
            }
        }

    }
}

