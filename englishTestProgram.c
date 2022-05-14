#define _CRT_SECURE_NO_WARNINGS_
#define S 50
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
//문자열을 출력하는 함수
//문자열을 정렬하는 함수
//문자열을 변형해서 문제로 바꾸는 함수
//맞춘 갯수에 총점을 구하는 함수



void get_string(char (*list)[S],int colum){//문자열을 지정받는 함수.
    
    printf("문자열 5개를 입력하세요");
    
    for(int i  = 0; i< colum; i++){
        scanf("%s",list[i]);
    }
}

void sortingWord(char (*list)[S], int colum){
    
    int least;
    char tmp[S];
    
    for(int i = 0; i<colum-1; i++){
        least = i;
        
        for(int e = i+1; e<colum;e++){
            
            if(strcmp(list[least],list[e]) > 0){
                least = e;
            }
        }
        
        if(i != least){
            strcpy(tmp,list[i]);
            strcpy(list[i],list[least]);
            strcpy(list[least],tmp);
        }
    }
    
}

void makeQuestion(char (*list)[S], char (*original_answer)[2], int colum){
    
    int blank1 = 0;
    int blank2 = 0;
    
    for(int i = 0; i<colum; i++){
        
        while(blank1 == blank2 || blank1 > blank2){
            
            blank1 = rand()%(strlen(list[i]));
            blank2 = rand()%(strlen(list[i]));
            
        }
        
        original_answer[i][0] = list[i][blank1];
        original_answer[i][1] = list[i][blank2];
        
        list[i][blank1] = '_';
        list[i][blank2] = '_';
        blank1  = 0;
        blank2  = 0;
        
    }
}

void copyString(char list[][S], char string[][S], int colum){
    
    for(int i = 0; i<colum; i++){
        
        strcpy(string[i],list[i]);
        
    }
}

void runGame(char p_string[][S], char answerString[][S], char original_answer[][2], int colum){
    
    static int score = 0;
    int correct_count = 0;
    
    for(int i = 0; i< colum; i++){
        
        char answer1, answer2;
        
        printf("문제 %d: %s\n",i+1,p_string[i]);
        
        printf("첫번째 문자를 입력:");
        scanf(" %c",&answer1);
        getchar();
        
        printf("두번째 문자를 입력:");
        scanf(" %c",&answer2);
        getchar();
        
        if(answer1 == original_answer[i][0] && answer2 == original_answer[i][1]){
            printf("정답입니다, 축하합니다.\n");
            correct_count++;
        }else{
            printf("틀렸습니다. 정답은 : %s\n",answerString[i]);
        }
        
    }
    printf("총 5 문제 중 %d 문제 맞췄습니다 100점 만점에 %d 점 입니다.",correct_count, correct_count*20);
}


int main() {
    
    srand((unsigned)time(NULL));
    char p_string[5][S];//빈칸을 가지고 문제를 가지고 있을 리스트
    char answer_string[5][S];//원래 정답을 저장하고 있을 리스트
    char original_answer[5][2];
    
    printf("지금부터 영어단어 시험을 시작하겠습니다.");
    get_string(p_string, 5);
    sortingWord(p_string, 5);
    copyString(p_string, answer_string, 5);
    makeQuestion(p_string, original_answer, 5);
    
    
    runGame(p_string, answer_string,original_answer, 5);
    
    
    
    
    
}
