#include<stdio.h>
#include<unistd.h>//posix os api 에 대한 access를 제공함.
#include<stdlib.h>
int main(void){
    if(access("linux.txt",F_OK)==-1){//파일 권한 체크를 위해서 사용하는 함수
        //F_OK = 파일의 존재 여부, access(파일명,const char)
        perror("linux.txt");//전역 변수 errno 의 값을 해석하여 이에 해당하는 시스템 오류 메세지를 표준 오류 출력 스트림(stderr)에 출력한다.
        exit(1);
    }
    return 0;
}
