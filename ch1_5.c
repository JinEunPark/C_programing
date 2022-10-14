#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>

extern int errno;
int main(){

    char* err;

    if(access("test.txt",R_OK)==-1){
        err = strerror(errno);//인자로 errno를 받아서 오류 메세지를 반환하는 메소드
        printf("오류: %s(test.txt)\n",err);
    }
}


//
// Created by 박진은 on 2022/09/29.
//
침