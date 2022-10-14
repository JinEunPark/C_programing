#include<sys/stat.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
    if(rename("han", "bit")==-1){
        perror("han");
        exit(1);
    }
}

//
// Created by 박진은 on 2022/09/29.
//
