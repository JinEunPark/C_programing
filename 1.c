#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void){
    if(access("linux.txt",F_OK)==-1){
        perror("linux.txt");
        exit(1);
    }
    return 0;
}