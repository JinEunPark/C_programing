#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdio.h>
#include <stdlib.h>

int main(){
    char *cwd;
    int fd;
    cwd = getcwd(NULL, BUFSIZ);
    printf("1.current location cwd = %s\n",cwd);

    fd = fopen("bit",O_RDONLY);//읽기 전용방식으로 파일을 열았음.

    fchdir(fd);
    cwd = getcwd(NULL,BUFSIZ);
    printf("2.current location: cwd = %s\n",cwd);

    close(fd);
    free(cwd);
}
//
// Created by 박진은 on 2022/09/29.
//
