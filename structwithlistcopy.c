#include <stdio.h>
typedef struct poson{
    char name[20];
    char phoneNum[20];
    int age;
}Person;
Person getPersonInformation(void){
    Person person;
    puts("이름을 입력하시요");
    scanf("%s",person.name);
    puts("전화번호를 입력하세요");
    scanf("%s",person.phoneNum);
    puts("나이를 입력하세요");
    scanf("%d",&person.age);
    return person;
}
void showPersonInformation(Person person){
    printf("name: %s\n",person.name);
    printf("phoneNumber: %s\n",person.phoneNum);
    printf("age: %d\n",person.age);
}
int main(void){
    Person person = getPersonInformation();
    showPersonInformation(person);
    Person person2;
    person2 = person;//구조체 내부에 선언된 배열 까지도 한번에 복사됨.
    showPersonInformation(person2);
}
