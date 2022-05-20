#include <stdio.h>
#include<string.h>
typedef struct phoneBook{//이름 전화번호 주소
    char name[20];
    char phoneNumber[30];
    char address[40];

}PhoneBook;
int main() {

   PhoneBook first;
   printf("이름을 입력하세요");
   scanf("%s",first.name);

   printf("전화번호를 입력하세요");
   scanf("%s",first.phoneNumber);
   getchar();

   printf("주소를 입력하세요");
   fgets(first.address,sizeof(first.address),stdin);

   printf("저장한 정보는 : name: %s  phonenumber: %s address: %s",first.name,first.phoneNumber,first.address);

}
