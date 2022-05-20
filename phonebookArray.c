#include <stdio.h>
#include<string.h>


typedef struct phoneBook{//이름 전화번호 주소
    char name[20];
    char phoneNumber[30];
    char address[40];

}PhoneBook;

int main() {

    PhoneBook person[5];

    for(int i = 0; i<5; i++){

        printf("이름을 입력하세요");
        scanf("%s",person[i].name);

        printf("전화번호를 입력하세요");
        scanf("%s",person[i].phoneNumber);
        while(getchar() != '\n');

        printf("주소를 입력하세요");
        fgets(person[i].address,sizeof(person[i].address),stdin);

    }

   for(int i = 0; i< 5; i++){
       printf("저장한 정보는 : name: %s  phonenumber: %s address: %s\n",person[i].name,person[i].phoneNumber,person[i].address);
   }

}
