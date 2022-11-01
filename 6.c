#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {//사람의 이름과 성적을 저장할 구조체 선언.
    char name[10];
    int kor;
    int math;
    int eng;
    int sum;
    double ave;
};

void printPerson(struct Person person) {//person을 형식에 맞게 출력하는 함수
    printf("%s %d %d %d %d %.1lf\n", person.name, person.kor, person.math, person.eng, person.sum, person.ave);
}

void sortingPerson(struct Person person[], int size) {//person배열을 sum에 따라서 정렬하는 함수

    for (int i = 1; i < size; i++) {//삽입정렬을 이용해서 구현함
        struct Person tmpPerson = person[i];
        int e = i -1;
        while (e >= 0 && person[e].sum > tmpPerson.sum) {
            person[e+1] = person[e];
            e = e-1;
        }
        person[e+1] = tmpPerson;
    }
}
void printSubjectAve(struct Person person[],int size) {
    double KAve = 0, MAve = 0, EAve = 0;
    for (int i = 0; i < size; i++) {
        KAve += (double) person[i].kor / size;
        MAve += (double) person[i].math / size;
        EAve += (double) person[i].eng / size;
    }
    printf("     %.1lf  %.1lf  %.1lf\n", KAve, MAve, EAve);
}
int main(void) {
    FILE *rfp;

    struct Person person[5];//person 배열을 선언함.

    if ((rfp = fopen("6.dat", "r")) == NULL) {//파일을 엶
        perror("fopen: 6.dat");
        exit(1);
    }

    for (int i = 0; i < 5; i++) {//fscanf을 이용해서 구현함.
        fscanf(rfp, "%s %d %d %d", person[i].name, &person[i].kor, &person[i].math, &person[i].eng);
        person[i].sum = person[i].kor + person[i].eng + person[i].math;
        person[i].ave = (double) person[i].sum / 3;
    }

    sortingPerson(person,5);//person을 정렬하는 함수 실행
    printf("     KOR MATH ENG sum ave\n");//과목을 출력
    for(int i = 0; i< 5; i++){
        printPerson(person[i]);
    }
    printSubjectAve(person,5);//과목의 평균을 구하는 함수 실행


}
// Created by 박진은 on 2022/10/31.
//
