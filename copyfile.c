#include<stdio.h>

int main() {
    FILE *file = fopen("/Users/bagjin-eun/Desktop/data.txt", "rt");
    FILE *file1 = fopen("/Users/bagjin-eun/Desktop/simple.txt", "wt");
    char ch;
    while ((ch = getc(file)) != EOF) {//EOF file의 끝이 아닐 때 까지 문자를 반환해서 ch에 저장.
        fputc(ch, file1);//fputc(ch, file1) 파라미터 1 출력하려는 문자, 출력을 받을 스트림.
    }
    if (feof(file) != 0) {
        puts("파일 복사완료");
    } else {
        puts("파일 복사 실패");
    }
    fclose(file);
    fclose(file1);
}
