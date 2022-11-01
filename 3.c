#include <sys/fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main(void) {

    int fdin, fout;
    //fdin:읽기 전용으로 파일을 열 파일 디스크립터 저장하는 변수
    //fout:쓰기 전용으로 파일을 열 파일 디스크립터를 저장하는 변수

    char buf[SIZE];//파일에서 데이터를 읽고 저장할 변수

    fdin = open("dummy", O_RDONLY);//읽기 전용으로 파일을 엶
    if (fdin == -1) {//파일을 여는 과정에서 오류가 발생하면 감지
        perror("open reading file");
        exit(1);
    }

    fout = open("copy", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    //파일을 쓰기 전용을 열고 생성할 때 파일이 존재한다면 다시 새로 생성하도록 만듦
    if (fout == -1) {//파일을 여는 과정에서 오류가 발생하면 종류
        perror("open writing file");
        exit(1);
    }

    int n = 0;//read, write에서 반환하는 바이트수를 저장할 변수

    while ((n = read(fdin, buf, SIZE))>0) {//파일에서 읽은 바이트 수가 0보다 크다면 반복

        if(write(fout, buf, n)!=n){//읽은 바이트 수와 작성한 바이트 수가 같지 않다면 오류 발생
            perror("Write");
        }
    }

    if(n == -1)perror("Read");// n == -1이라면 읽는 과정에서 오류가 발생한것 이므로

    close(fdin);//열었던 파일을 닫음
    close(fout);//열었던 파일을 닫음

}
//
// Created by 박진은 on 2022/10/31.
//
