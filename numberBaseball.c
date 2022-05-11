#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void makerandInteger(int *listForbaseball);

void getUserAnswer(int *answer);

void referee(int *answer, int *listForbaseball, int *strike, int *ball);

int main() {

    int listForbaseball[3] = {0};
    int userAnswer[3];

    makerandInteger(listForbaseball);
    printf("생성된 정수들 %d, %d, %d\n", listForbaseball[0], listForbaseball[1], listForbaseball[2]);


    int tmp = 0;
    int strike = 0;
    int ball = 0;

    while (1) {
        tmp++;
        strike = 0;
        ball = 0;

        getUserAnswer(userAnswer);
        referee(userAnswer, listForbaseball, &strike, &ball);

        if (strike == 3) {
            printf("숫자 야구에 성공하셨습니다.\n");
            printf("당신은 %d 시도만에 성공하셨습니다.\n", tmp);
            printf("새로운 게임을 시작하시겠습니까(y/n)?\n");


            char answer2;
            getchar();
            scanf("%c", &answer2);

            if (answer2 == 'y') {
                tmp = 0;
                printf("게임을 시작합니다\n");
                makerandInteger(listForbaseball);
                printf("생성된 정수들 %d, %d, %d\n", listForbaseball[0], listForbaseball[1], listForbaseball[2]);
            } else {
                printf("게임 종료합니다.\n");
                break;
            }

        }
    }
}

void makerandInteger(int *listForbaseball) {


    while(1){
        srand((unsigned) time(NULL));
        for (int i = 0; i < 3; i++) {
            listForbaseball[i] = (int) rand() % 10;
        }
        if(listForbaseball[0] == listForbaseball[1]||listForbaseball[1] == listForbaseball[2]||listForbaseball[2]==listForbaseball[0]){
            continue;
        }else{
            break;
        }

    }

}

void getUserAnswer(int *answer) {
    printf("정수 3개를 순서대로 입력하세요");
    scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);


}

void referee(int *answer, int *listForbaseball, int *strike, int *ball) {

    for (int i = 0; i < 3; i++) {
        for (int e = 0; e < 3; e++) {
            if (answer[i] == listForbaseball[e] && i == e) {
                (*strike)++;
            } else if (answer[i] == listForbaseball[e] && i != e) {
                (*ball)++;
            }
        }
    }
    printf("판정은 %d-strike, %d- ball\n", *strike, *ball);

}