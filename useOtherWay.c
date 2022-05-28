#include <stdio.h>
#include<string.h>

int main() {
    char name[10];
    char sex;
    int age;
    FILE *file = fopen("/Users/bagjin-eun/CLionProjects/untitled27/file.txt", "wt");
    for (int i = 0; i < 3; i++) {
        printf("이름 성별 나이 입력:");
        scanf("%s %c %d", name, &sex, &age);
        getchar();
        fprintf(file, "%s %c %d", name, sex, age);
    }
    fclose(file);

    char name2[20];
    char sex2;
    int age2;
    FILE *file2 = fopen("/Users/bagjin-eun/CLionProjects/untitled27/file.txt", "rt");
    for (int i = 0; i < 3; i++) {
        fscanf(file2,"%s %c %d",name2, &sex2, &age2);

        printf("다시 입력받음: %s %c %d\n",name2,sex2, age2);
    }
    fclose(file2);
}
