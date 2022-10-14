#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *rfp, *wfp;//읽기 전용으로 열파일의 포인터 쓰기 전용으로 열 파일의 포인터
    int c;

    if((rfp=fopen("linux.txt","r"))==NULL){
        perror("fopen : linux.txt");
        exit(1);

    }

    if((wfp=fopen("linux.out","w"))==NULL){
        perror("fopen: linux,out");
        exit(1);
    }

    while((c= fgetc(rfp))!=EOF){
        fputc(c,wfp);
    }
    fclose(rfp);
    fclose(wfp);
}
//
// Created by 박진은 on 2022/10/14.
//
