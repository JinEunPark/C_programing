#include <sys/fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int fd, fd1;
    fd = open("tmp.aaa",O_CREAT|O_WRONLY|O_TRUNC,0644);
    if(fd == -1){
        perror("treat tmp.aaa");
        exit(1);
    }
    close(1);

    fd1 = dup(fd);
    printf("DUP FD=%d\n",fd1);
    printf("Standard output Redirection\n");

    close(fd);
}
//
// Created by 박진은 on 2022/10/11.
//
