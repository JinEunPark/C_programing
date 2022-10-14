
#include <stdio.h>
#include <sys/stat.h>
int main(int argc, char* argv[]){

    char* filename = argv[1];

    struct stat statBuf;

    stat(filename,&statBuf);

    unsigned int authentic = statBuf.st_mode & (S_IREAD>>3);
    printf("authority %ud",authentic);

    chmod(filename,S_IFREG);

}
//
// Created by 박진은 on 2022/10/09.
//
