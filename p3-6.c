#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char* argv[]){

    struct stat statBuf;

    stat(argv[1],&statBuf);

    printf("%s's byte is %d",argv[1],(int)statBuf.st_blocks*512);

}
//
// Created by 박진은 on 2022/10/09.
//
