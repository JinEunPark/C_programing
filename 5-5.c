#include <unistd.h>
#include <pwd.h>
#include <printf.h>

int main(){
    struct passwd *pw;
    pw = getpwuid(getuid());
    printf("UID : %d\n",(int)pw->pw_uid);
    printf("Login Name : %s\n",pw->pw_name);
}
//
// Created by 박진은 on 2022/10/30.
//
