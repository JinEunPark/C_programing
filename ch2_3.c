#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
    char* cwd;
    char wd1[BUFSIZ];
    char wd2[10];

    getcwd(wd1,BUFSIZ);
    printf("wd1 = %s\n",wd1);//지정된 버퍼로 현재 위치를 문자열로 만들어서 반환한다.

    cwd = getcwd(NULL,BUFSIZ);
    printf("current = %s\n",cwd);
    free(cwd);

    cwd = getcwd(NULL,0);
    printf("current1 = %s\n",cwd);
    free(cwd);

    if(getcwd(wd2,10)==NULL){//저장할 공간이 부족하면 NULL을 반환한다.
        perror("getcwd");
        exit(1);
    }
}


//
// Created by 박진은 on 2022/09/29.
//
