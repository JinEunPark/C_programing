//
//  main.c
//  getstring
//
//  Created by 박진은 on 2022/05/14.
//

#include <stdio.h>
#include<string.h>
#define S 50
#define _CRT_SECURE_NO_WARNINGS_
//문자열을 출력하는 함수

void printString(char list[][S],int colum){
    
    printf("[");
    
    for(int i = 0; i<colum; i++){
        printf("%s ", list[i]);
    }
    printf("]\n");
}

//문자열을 정렬하는 함수
void sortingStiringList(char (*list)[S],int colum){
    int least;
    char tmp[S];
    
    for (int i = 0; i<colum; i++){
        least = i;
        
        for(int j = i+1;j<colum;j++){
            
            if(strcmp(list[least],list[j])>0){
                //왼쪽 문자열이 사전순으로 더 크다면 즉 list[j]가 사전순으로 더 빠르다면.
                least = j;
            }
        }
        
        if(i != least){
            strcpy(tmp,list[i]);
            strcpy(list[i],list[least]);
            strcpy(list[least],tmp);
            
        }
       
    }
}

int main() {
    
    char string[5][S];
    printf("문자열을 입력하세요");
    
    for(int i = 0; i< 5; i++){
        scanf("%s",string[i]);
    }
    printString(string, 5);
    sortingStiringList(string, 5);
    printString(string, 5);
}
