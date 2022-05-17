//
//  main.c
//  20220517
//
//  Created by 박진은 on 2022/05/17.
//

#include <stdio.h>
#include<string.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS_
struct person{
    int age;
    char phonenumber[20];
    char name[20];
    
};
int main(void){
    struct person p1, p2;
    fputs("이름을 입려가세요:",stdout);
    scanf("%s",p1.name);
    fputs("전화번호를 입력하세요:",stdout);
    scanf("%s",p1.phonenumber);//무낮열이기 때문에 주소값을 반환하는 연산자를 사용하지 않음;
    fputs("나이를 입력하세요",stdout);
    scanf("%d",&p1.age);//구조체 변수도 일반 변수와 동일하게 사용한다.
    
    fputs("이름을 입력하세요",stdout);//puts와는 다르개 출력하는 버퍼를 설정할 수 있는 함수이고 일어들일기 가능
    scanf("%s",p2.name);
    strcpy(p2.phonenumber,"01024213046");//문자열을 복사하는 함수 사용해서 한번에 입력;
    fputs("나이를 입력하세요 해놓고 직접적으로 입력해버리기",stdout);
    p2.age = 23;
    
    printf("p1의 정보를 출력합니다\n");
    printf("나이: %d\n",p1.age);
    printf("전화번호: %s\n",p1.phonenumber);
    printf("이름: %s\n",p1.name);
    
    
    printf("p2의 정보를 출력합니다\n");
    printf("p2 나이: %d\n",p2.age);
    printf("p2 이름: %s\n",p2.name);
    printf("p2 전화번호 %s\n",p2.phonenumber);
    
}
