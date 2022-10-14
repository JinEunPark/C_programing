//mkdir
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
#include <sys/fcntl.h>//open
#include <dirent.h>//readdir

int main(){

    if(rmdir("buf")==-1){
        printf("file can't delete");
    }else{
        printf("is deleted!");
    }
}
//
// Created by 박진은 on 2022/10/09.
//
