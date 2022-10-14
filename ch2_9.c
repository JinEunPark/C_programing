#include<stdio.h>
#include <stdlib.h>
#include <dirent.h>
int main(){
    DIR *dp;
    struct dirent *dent;
    long loc;
    dp = opendir(".");

    printf("start position: %ld\n",telldir(dp));
    while((dent = readdir(dp))){
        printf("read: %s -> ", dent->d_name);
        printf("Cur position : %ld\n", telldir(dp));
    }
    loc = telldir(dp);//마지막에 출력한 위치를 저장함


    printf("** Directory Position Rewind **\n");
    rewinddir(dp);
    printf("Cur position : %ld\n", telldir(dp));


    printf("**Move Directory pointer**\n");
    readdir(dp);
    seekdir(dp,loc);//위에서 저장한 위치로 특정한 포인터가 이동하게 만듦.
    printf("Cur position : %ld\n", telldir(dp));
    dent = readdir(dp);
    printf("Read: %s \n", dent->d_name);

    closedir(dp);

}

//
// Created by 박진은 on 2022/09/29.
//
