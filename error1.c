#include <stdio.h>
#include <string.h>
char * ReadUserName(void){
    char name[30];
    printf("input your name:");
    scanf("%s",name);
    return name;
}
int main() {
    char * name1;
    char * name2;
    name1 = ReadUserName();
    name2 = ReadUserName();
    printf("%s",name1);
    printf("%s", name2);

}
