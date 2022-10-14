#include <unistd.h>//rmdir
#include <string.h>//strerror()
#include<stdio.h>

extern int errno;
int main(){

    if(rmdir("test.txt")==-1){
        char* errorString = strerror(errno);
        printf("%s",errorString);
    };

}
//
// Created by 박진은 on 2022/10/09.
//
