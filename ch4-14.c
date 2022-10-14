#include <sys/fcntl.h>
#include <stdio.h>

int main(){
    int fileDescriptor = open("linux.txt",O_RDONLY);
    FILE* filePointer;
    filePointer = fdopen(fileDescriptor,"r");//int 형인 file descriptor에서 filepointer를 반환하는 함수이다. 이때 open으로 연 방식과
    //fopen으로 연 함수의 열기 mode가 일치해야한다.
    char string[BUFSIZ];

    fgets(string,BUFSIZ,filePointer);
    printf("%s",string);
    fclose(filePointer);

}
//
// Created by 박진은 on 2022/10/14.
//
