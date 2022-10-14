#include <sys/fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int rfd,wfd,n;
    char buf[10];

    rfd= open("linux.txt",O_RDONLY);
    if(rfd ==-1){}
    perror("open linux.txt");
    exit(1);

    wfd= open("linux.bak",O_CREAT|O_WRONLY|O_TRUNC,0644);
    if(wfd == -1){
        perror()
    }

}
//
// Created by 박진은 on 2022/10/11.
//
