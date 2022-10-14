#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *rfp, *wfp;
    char buf[BUFSIZ];

    if((rfp = fopen("linux.txt","r")) == NULL){//읽기 전용으로 파일을 얼었음
        perror("fopen: linux.txt");
        exit(1);
    }

    if((wfp= fopen("linux.out", "a"))==NULL){//덧 쓰기 전용으로 파일을 열였음
        perror("fopen: linux.out");
        exit(1);
    }

    while(fgets(buf,BUFSIZ,rfp)!=NULL){//파일 스트림을 통해서 문자열을 개행문자까 읽어옴
        fputs(buf,wfp);//buf의 내용을 wfp가 가리키고 있는 파일로 출력함
    }
    fclose(rfp);
    fclose(wfp);
}
//
// Created by 박진은 on 2022/10/14.
//
