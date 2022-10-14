#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    //argc: 함수에 전달되는 데이터의 갯수, argv: main 함수에 전달되는 실제적인 데이터 char형 포인터 배열

    int n;
    extern char* optarg;//옵션 뒤에 별도의 파라미터 값이 오는 경우, 이를 파싱한 결과 파라미터 값은 optarg에 문자열로 저장된다.
    extern int optind;
    //optind : 다음번 처리될 옵션의 인덱스이다. 만약 파싱한 옵션이후에 추가적인 파라미터를 받는다면 (예를 들어 입력 파일 이름 같이)
    // 이 값을 활용할 수 있다. getopt()함수는 한 번 호출될 때마다 이 값을 업데이트한다.

    long r;
//int getopt(int argc, char * const argv[], const char *optstring);
//string parsing option에 따라서 문자열이 달라진다.
    while((n=getopt(argc, argv,"a:m:"))!=-1){//함수는 매개변수를 분석 (parsing) 할때 -d -i -m -b등과 같이 -로 시작하면서 옵션의
        // 길이가 d i m b와 같이 1글자인 옵션들을 해석함
        //옵션 문자가 없다면 -1을 반환한다.
        switch(n){
            case 'a'://
                r = 0;
                for(--optind; optind < argc; optind++)
                    r = r + atol(argv[optind]);//문자를 long 타입 정수로 반환하는 함수.
                break;
            case 'm':
                r = 1;
                for(--optind; optind < argc; optind++)
                    r = r*atol(argv[optind]);
                break;
        }
        printf("res = %ld\n", r);
    }
}


// Created by 박진은 on 2022/09/19.
//
