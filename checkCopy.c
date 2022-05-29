#include <stdio.h>

int main(void) {
    FILE *file = fopen("/Users/bagjin-eun/CLionProjects/untitled29/test.txt", "wt");
    if (file == NULL) {
        printf("fail opening file");
    }
    fputs("hello my name is Park jin eun", file);
    fclose(file);
    FILE *file1 = fopen("/Users/bagjin-eun/CLionProjects/untitled29/test.txt", "rt");
    FILE *file2 = fopen("/Users/bagjin-eun/CLionProjects/untitled29/test2.txt", "wt");

    char c;

    if (file1 == NULL || file2 == NULL) {
        puts("fail to open file");
        return -1;
    }

    while ((c = getc(file1)) != EOF) {
        fputc(c, file2);
    }

    if (feof(file1) != 0) {
        puts("파일 복사완료");
    }else{
        puts("파일 복사실패");
    }

    fclose(file1);
    fclose(file2);
}