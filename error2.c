#include <stdio.h>
#include <string.h>
char name[30];
char * ReadUserName(void){
    printf("input your name:");
    scanf("%s",name);
    return name;
}
int main() {
    char * name1;
    char * name2;
    name1 = ReadUserName();
    printf("%s\n",name1);

    name2 = ReadUserName();
    printf("%s\n", name2);

    printf("%s\n",name1);
    printf("%s\n",name2);


}
