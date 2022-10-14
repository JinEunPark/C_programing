#include <ndbm.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int fd;
    mode_t mode;
    mode = S_IREAD | S_IRUSR | S_IRGRP | S_IROTH;
    fd = open("test.txt",O_CREAT,mode);
    if(fd == -1){
        perror("creat");
        exit(1);
    }
    close(fd);
}
//
// Created by 박진은 on 2022/10/11.
//
