#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char *swapString(char string[], int size, char reverseString[]) {

    int len = strlen(string);

    for(int i = 0; i<len; i++){
        reverseString[len - i -1 ] = string[i];
    }
    reverseString[len] = 0;
}

int main() {

    int size;
    printf("input size of the string");
    scanf("%d", &size);
    getchar();

    char *string = (char *) malloc(sizeof(char)*size);
    printf("input original string:");
    fgets(string, sizeof(char)*size, stdin);
    const int fsize = size;

    char reverseString[fsize];
    printf("original string: %s\n", string);
    swapString(string, size, reverseString);
    printf("reverse string: %s\n", reverseString);

}
