#include <sys/fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int fd, wfd, n;
    char buf[10];
    fd = open("linux.txt",O_RDONLY);
    if(fd == -1){
        perror("open linux.txt");
        exit(1);
    }
    while(n=read(fd,buf,5)){
        if(n==-1){
            perror("read");
            exit(1);
        }
        buf[n] = "\0";
                exit(1);
    }
    buf[n] = "\0";
    printf("%s",buf);

    close(fd);
//    wfd = open("linux.bak", O_CREAT|O_WRONLY|O_TRUNC,0644);
//
//    if(wfd == -1){
//        perror("open linux.bak");
//        exit(1);
//    }
//
//    while((n=read(rfd,buf,6))>0){
//        if(write(wfd,buf,n)!=n)perror("write");
//    }
//
//    if(n==-1)perror("READ");
//
//    close(rfd);
//    close(wfd);
}
//
// Created by 박진은 on 2022/10/11.
//
