#include<stdio.h>
#include<sys/stat.h>
#include <unistd.h>
int main(int argc, char* argv[]){
    struct stat statBuf;
    stat(argv[1],&statBuf);
    printf("file mode = %o\n",statBuf.st_mode);

    int kind = (statBuf.st_mode & S_IFMT);

    switch(kind){
        case S_IFSOCK:
            printf("socket file");
            break;
        case S_IFLNK:
            printf("symbalic link file");
            break;
        case S_IFREG:
            printf("general file");
            break;
        case S_IFBLK:
            printf("special/block file");
            break;
        case S_IFDIR:
            printf("directory file");
            break;
        case S_IFCHR:
            printf("sentence file special device file");
            break;
    }
}
//
// Created by 박진은 on 2022/10/09.
//
