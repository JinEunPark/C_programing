#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<dirent.h>
#include <sys/stat.h>
#include <stdio.h>

int main(){
    mkdir("dir1",0755);
    mkdir("dir2",0755);
    rmdir("dir1");
    rename("dir2","hanbit");
}
//
// Created by 박진은 on 2022/10/09.
//
