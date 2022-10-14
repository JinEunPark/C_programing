#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>
int main(){
    if(access("test.txt",R_OK)==-1){//파일의 존재 여부를 판단해서 출력함.
        perror("test.txt");
        exit(1);
    }
}


//
// Created by 박진은 on 2022/09/29.
//
