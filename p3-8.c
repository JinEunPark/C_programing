#include<stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {

    char *fileName = argv[1];
    struct stat statBuf;

    stat(fileName, &statBuf);
    printf("file name: %s\n", fileName);
    printf("inode number: %d\n", (int) statBuf.st_ino);

    int kind = (statBuf.st_mode & S_IFMT);
    char *kinds;
    switch (kind) {
        case S_IFSOCK:
            kinds = ("socket file");
            break;
        case S_IFLNK:
            kinds = ("symbalic link file");
            break;
        case S_IFREG:
            kinds = ("general file");
            break;
        case S_IFBLK:
            kinds = ("special/block file");
            break;
        case S_IFDIR:
            kinds = ("directory file");
            break;
        case S_IFCHR:
            kinds = ("sentence file special device file");
            break;
    }
    printf("file kind: %s\n", kinds);

    unsigned int authentic = statBuf.st_mode & (S_IREAD >> 3);
    char *authority;

    switch (authentic) {
        case S_IRUSR:
            authority = "user read";
            break;
        case S_IRWXG:
            authority = "group read";
            break;

    }
    printf("file access authority: %s\n", authority);
    printf("file name: %d\n", (int) statBuf.st_uid);

}
//
// Created by 박진은 on 2022/10/09.
//
