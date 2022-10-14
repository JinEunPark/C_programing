#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    char *cwd;
//    cwd = get_current_dir_name();
    printf("cwd = %s\n");
    free(cwd);
}



//
// Created by 박진은 on 2022/09/29.
//
