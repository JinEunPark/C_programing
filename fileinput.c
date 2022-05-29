#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("/Users/bagjin-eun/CLionProjects/untitled26/text.txt", "wt");
    if (file == NULL) {
        printf("파일을 열 수 없습니다");
    } else {
        fputc('A', file);
        fputc('B', file);
        fputs("name is park jin eun\n", file);
        fputs("your name is park\n", file);
    }
    fclose(file);

    FILE *file2 = fopen("/Users/bagjin-eun/CLionProjects/untitled26/text.txt", "rt");
    char ch;
    ch = fgetc(file2);
    printf("%c\n", ch);
    ch = fgetc(file2);
    printf("%c\n", ch);
    char buffer[50];
    char buf[20];
    fgets(buffer, sizeof(buffer), file2);
    printf("%s", buffer);
    fgets(buffer, sizeof(buffer), file2);
    printf("%s", buffer);
    fclose(file2);
    return 0;
}
