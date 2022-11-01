#include <printf.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {//command line argument 를 받기 위해서 설정

    double sum = 0;//합을 저장할 double형 변수 선언

    for (int i = 0; i < argc; i++) {//argc로 넘어온 매개변수의 수 만큼 반복함.

        sum += atof(argv[i]);//atof 함수를 이용해서 이를 sum에 저장함.
    }

    printf("\n %lf\n", sum);//저장한 결과를 출력함.

    return 0;
}
//
// Created by 박진은 on 2022/10/31.
//
