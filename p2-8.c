#include <unistd.h>//fchdir
#include <stdio.h>//BUFSIZ가 정의됨
#include <sys/fcntl.h>//open

int main(){

    char* location;
    int fd;

    location = getcwd(NULL,BUFSIZ);
    printf("%s\n\n",location);
    fd = open("buf",O_RDONLY);

    fchdir(fd);
    location = getcwd(NULL,BUFSIZ);
    printf("location: %s\n\n",location);


}
//
// Created by 박진은 on 2022/10/09.
//
