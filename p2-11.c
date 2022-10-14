#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    printf("present current location: %s\n\n", getcwd(NULL,0));
    mkdir(argv[1],0755);//인자로 받은 이름으로 디렉토리를 생성함.

    chdir(argv[1]);
    printf("present current location: %s", getcwd(NULL,0));


}

//
// Created by 박진은 on 2022/10/09.
//
