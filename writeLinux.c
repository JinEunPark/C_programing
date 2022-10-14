#include <stdio.h>

int main(){
    FILE* file = fopen("linux.txt","w");
    fputs("Linux System programming\nhanbit Academy\n",file);

    fclose(file);
}
//
// Created by 박진은 on 2022/10/14.
//
