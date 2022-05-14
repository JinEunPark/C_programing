#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NOWARNINGS

void clearinputStream(void){
    while(getchar() !='\n');
}
int main(void){
    char perId[7];
    char name[10];
    fputs("please input your id ",stdout);
    fgets(perId,sizeof(perId),stdin);
    clearinputStream();
    fputs("please input your name",stdout);
    fgets(name,sizeof(name),stdin);
    printf("주민번호 : %s\n",perId);
    printf("사람이름 : %s\n",name);

    char str[] = "1234567";
    printf("%u\n",strlen(str));


    char str1[30] = "simple String";
    char str3[30];
    strcpy(str3,str1);//strcpy함수를 호룿ㄹ하는 경우에는 배열의 범위를 넘어서 복사가 진행될 위험이 있다.
    printf("%s\n",str3);//str1의. 문자열을 str3에 복사하고 복사가 완료된 문자열의 주소값을 반환한다.

    char str4[40];
    strncpy(str4,str3,sizeof(str3));// str3의 문자열은 str4에 복사하는데 str3의 사이즈 많큼 복사를 씨함크기 만큼 복사를 진행해서 오류가 발생하지 않는다.

    clearinputStream();
    char str1[20] ="1234567890";
    char str2[20];
    char str3[5];
    
    strcpy(str2,str1);//strcpy를 사용하는 경우엔 배열의 길이를 넘어서 복사가 진행될 숭 ㅣㅆ다
    puts(str2);
    strncpy(str3,str1,sizeof(str3));
    puts(str1);
    strncpy(str3,str1,sizeof(str3)-1);//널문자를 고려해서 하나 작게 설정해서 문자열을 복사함.
    str3[strlen(str3)-1] = 0;
    puts(str1);
    
    char str11[20] = "first";
    char str12[20] = "second";
    char str13[20] = "simple num: ";
    char str14[20] = "1234567890";
    
    strcat(str11,str12);//앞 문자열의 널문자부터 concatation이 일어난다.
    puts(str11);
    
    strncat(str13,str14,7);//앞 문자열의 널문자부터 concatation이 일어나는데 널 문자 제외 7가를 붙이고 마지막에 널문자 를 삽입함.
    puts(str13);
    printf(" result : %d\n",strcmp("qkrwlsdms","qkrekwjd"));
    printf("result2 : %d", strncmp("qkrwlsdms","qkrekwjd",8));
    
    char string[30];
    char string2[30];
    printf("문자열을 두개 입력하세요");
    scanf("%s",string);
    clearinputStream();
    scanf("%s",string2);
    if(strcmp(string, string2)==0){
        fputs("두 문자열은 동일합니다\n",stdout);
        
    }else{
        fputs("두 무자열은 동일하지 않습니다\n",stdout);
    }
    
    return 0;
    
    
}

