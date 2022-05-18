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
struct point{
    int posx;
    int posy;
};

int main(void){
    
    struct point list[4];
    
    struct employee em[5]={
        {"회장박진은","경기도 성남시 분당구 판교역로 235 에이치스퀘어 N동 7층 (우)13494","01024213046","990310"},
        {"대리최규현","경기도 성남시 분당구 판교역로 235 에이치스퀘어 N동 7층 (우)13494","01012341234","9901234"},
        {"운전기사 김학래", "경기도 성남시 분당구 판교역로 235 에이치스퀘어 N동 7층 (우)13494","0101231234","991234"},
        {"문지기 김민서","경기도 성남시 분당구 판교역로 235 에이치스퀘어 N동 7층 (우)13494","01012341234","991234"}
    };
    
    for(int i = 0; i< 5; i++){
        printf("%s %s %s %s\n",em[i].name, em[i].address, em[i].phonenumber, em[i].Id);
    }
    
    for(int i = 0; i<4; i++){
        printf("%d. 점을 입력하세요:",i);
        scanf("%d %d",&list[i].posx, &list[i].posy);
    }
    for(int i = 0; i< 4; i++){
        printf("%d 번째 점의 위치는 (%d, %d)\n",i+1,list[i].posx,list[i].posy);
    }
  
    
}
