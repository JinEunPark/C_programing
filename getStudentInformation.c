#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS_
typedef struct student {
    char name[20];//이름
    char stdnum[100];//학생번호
    char school[20];//학교
    char major[100];//전공
    int year;//학년
} Student;

void showStudent(Student student) {
    printf("[");
    printf("name : %s\n", student.name);
    printf("stdnum : %s\n", student.stdnum);
    printf("school : %s\n", student.school);
    printf("major : %s\n", student.major);
    printf("year : %d", student.year);
    printf("]\n\n");
}

Student getStudentInformatioin(void) {
    Student student;
    printf("name: ?");
    scanf("%s", student.name);
    printf("input number of student:");
    scanf("%s", student.stdnum);
    printf("input school name: ");
    scanf("%s", student.school);
    printf("input your major:");
    scanf("%s", student.major);
    printf("input your year:");
    scanf("%d", &student.year);

    return student;
}

int main() {

    Student student[7];
    for (int i = 0; i < 7; i++) {
        student[i] = getStudentInformatioin();
    }

    for (int i = 0; i < 7; i++) {
        showStudent(student[i]);
    }
}
