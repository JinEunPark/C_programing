#include <stdio.h>
#include<string.h>
typedef struct person{
    char name[20];
    char sex;
    char age;
}Person;
int main() {
    Person person;
    FILE * file  = fopen("/Users/bagjin-eun/CLionProjects/untitled27/file2.bin","wb");
    scanf("%s %c %d",person.name, &(person.sex), &(person.age));
    fwrite((void*)&person, sizeof(person),1,file);
    fclose(file);

    Person person2;
    file = fopen("/Users/bagjin-eun/CLionProjects/untitled27/file2.bin","rb");
    fread((void*)&person2, sizeof(person2),1,file);
    printf("\n복사된값: %s %c %d",person2.name, person2.sex,person2.age);
}
