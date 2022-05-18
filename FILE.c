#include <stdio.h>

int main() {
    FILE *fp = fopen("/Users/bagjin-eun/Desktop/simple.txt", "wt");//파일을 쓰기 개방모드로 개방함, wt 텍스트 파일 쓰기 전용으로 전달.
    //파일이 해당 경로에 존재하지 않으면 파일을 새로 생성함.
    if (fp == NULL) {
        puts("파일 오픈 실패");
        return -1;
    }
    fputc('a', fp);//파일로 문자를 출력하는 함수 파라미터로 출력하는 문자를 전송하고 파라미터로 파일의 포인터를 전달한다.
    fputc('b', fp);
    fputs("My name is park jin eun\n", fp);//파일로 문자열을 출력하는 함수 파라미터로 전달하려는 문자열과 파일 구조체의 포인터를 전달한다.
    fputs("your name is yoon\n", fp);
    fclose(fp);

    FILE *fl = fopen("/Users/bagjin-eun/Desktop/simple.txt", "rt");//원래 존재하는 파일을 택스트 형태의 읽기 전용모드로 개방함.
    if (fl == NULL) {
        puts("파일 오픈 실패");
        return -1;
    }
    char str[30];
    char a, b;
    a = fgetc(fl);//파일에서 문자하나를 얻어서 반환함. 따라서 문자 변수를 생성해서 대입하는 과정 필요
    printf("%c\n", a);
    b = fgetc(fl);
    printf("%c\n", b);
    fgets(str, sizeof(str), fl);//파일에서 문자열을 얻어서 반환함.문자열의 사이즈 만큼을 반환함.
    printf("%s\n", str);
    fgets(str, sizeof(str), fl);//파라미터로 문자열을 저장할 문자열과, 문자열의 사이즈 그리고 , 파일 구조체의 포인터를 전달함.
    printf("%s\n", str);

}
