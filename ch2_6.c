#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    char* cwd;
    cwd = getcwd(NULL,BUFSIZ);
    printf("current location: cwd = %s\n",cwd);

    chdir("bit");//상대 경로를 이용해서 디렉토리 위치를 지정함.

    cwd = getcwd(NULL,BUFSIZ);
    printf("2.current location: cwd = %s\n",cwd);
     free(cwd);
}

//
// Created by 박진은 on 2022/09/29.
//
