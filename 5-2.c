#include <printf.h>
#include <unistd.h>

int main(void){
    printf("Arg Max : %ld",sysconf(_SC_ARG_MAX));
    printf("Clock Tick : %ld \n",sysconf(_SC_CLK_TCK));
    printf("Max Open File %ld\n", sysconf(_SC_OPEN_MAX));
    printf("Max Login Name Length : %ld\n",sysconf(_SC_LOGIN_NAME_MAX));
}
//
// Created by 박진은 on 2022/10/30.
//
