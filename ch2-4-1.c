#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *cwd;
    cwd = get_current_dir_name();
    printf("cwd = %s",cwd);
    free(cwd);
}
//
// Created by 박진은 on 2022/10/09.
//
