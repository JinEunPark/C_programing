#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
int main(){
    DIR *dp;
    struct dirent *dent;
    dp = opendir(".");
    while((dent = readdir(dp))){
        printf("name: %s\n",dent->d_name);
        printf("Inode: %d\n", dent->d_ino);
    }
    closedir(dp);
}

//
// Created by 박진은 on 2022/09/29.
//
