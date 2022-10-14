#include <stdio.h>
#include <unistd.h>
#include <errno.h>

extern int errno;

int main(){
    if(access("test.txt",F_OK)==-1){
        printf("errno = %d error",errno);
        perror("test.txt");
    }
}
//
// Created by 박진은 on 2022/10/09.
//
