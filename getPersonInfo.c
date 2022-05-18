#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_
typedef struct point{
    int posx;
    int posy;
}Point;
typedef struct person{
    char name[20];
    char phonenum[20];//구조체 내부에 배열을 선언함
    int age;
}Person;
Person getPersoninfo(void){

    Person person;
    printf("name: ?");
    scanf("%s",person.name);
    printf("\nphomenum: ?");
    scanf("%s",person.phonenum);
    printf("age: ?");
    scanf("%d",&person.age);

    return person;
}
void showPerson(Person person){
    printf("[");
    printf("name : %s",person.name);
    printf("\nPhonenum : %s",person.phonenum);//구조체 내부의 배열이 그대로 촐력됨.
    //배열 자체도 통재로 복사되어서 들어간다.
    printf("\nage : %d",person.age);
    printf("]");
}
void showPoint(Point point){
    printf("location of point : %d , %d\n",point.posx, point.posy);
}

Point getcurrentLocation(void){
    Point point;
    printf("input current location:");
    scanf("%d %d",&point.posx, &point.posy);//객체의 레퍼런스가 전해진것이 아니기 때문에 반드시 반환값을 전해줘야함.
    //여기서 값이 저정되는 곳은 파라미터로 전달된 복사본 자리에 저장되는 것이다.
    return point;//만들어진 point객체로 전달 반드시 반환해서 전해줘야 함 이건 call by value
}

int main() {
  Point point1 = getcurrentLocation();//함수에서 반환된 point 객체의 복사본이 point1에 저장됨.
  showPoint(point1);//파라미터로 복사되어 call by refercence로 호풀되어서 들어감.

  Person person = getPersoninfo();
    showPerson(person);

}
