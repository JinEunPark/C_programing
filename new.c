#include<stdio.h>
#include<string.h>//c언어 string header file
#include<stdlib.h>//c lang standard lib

int main(void){

    char* str;//문자형 포인터 변수
    str = malloc(sizeof (char)*20);//메모리 할당 20*4 80bit
    strcpy(str,"Hello");//문자열 복사
    printf("%s\n",str);//문자열 출력

    strcpy(str,"Good morning");//다른 문자열 복사
    printf("%s\n",str);//문자열 출력

    free(str);//register에 할당된 메모리 해제
    return 0;
}

