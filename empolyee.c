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
struct employee{
    char name[20];
    char address[100];
    char phonenumber[30];
    char Id[20];
};

int main(void){
    struct employee em;
    printf("직원의 정보를 이름 주소 핸드폰 번호 주민번호 순서대로 입력하세요");
    scanf("%s %s %s %s",em.name, em.address, em.phonenumber, em.Id);
    
    printf("\n 직원의 정보를 출력합니다");
    printf("%s %s %s %s",em.name, em.phonenumber, em.address, em.Id);
    
  
    
}
