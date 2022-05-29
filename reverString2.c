#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {

    int size;
    printf("input size of the string");
    scanf("%d", &size);
    getchar();

    char *string = (char *) malloc(sizeof(char)*size);
    printf("input original string:");
    fgets(string, sizeof(char)*size, stdin);
    string[strlen(string)-1] = 0;// 개행문자를 없에기 위해서 수행함

    for(int i = strlen(string)-1; i>=0; i--){
        printf("%c",string[i]);
    }
}
