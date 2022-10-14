#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    //argc: 함수에 전달되는 데이터의 갯수, argv: main 함수에 전달되는 실제적인 데이터 char형 포인터 배열

    int i, sum = 0;
    for(i = 1; i<argc; i++){//전달된 데이터 수보다 하나 적게 실행
        sum+= atoi(argv[i]);//a to int 문자를 정수로 변환하는 함
        // 매개변수로 들어온 문자열을 앞에서 부터 읽어서, "공백" or "숫자가아닌문자" 가 올때까지 숫자로 변환을 해주는 원리 입니다.
    }
    printf("%d\n",sum);//최종 합을 출력함
    return 0;
}
