#include <stdio.h>
#include<string.h>

#define _CRT_SECURE_NO_WARNINGS_
#define PHONEBOOK_SIZE 200
#define INSERT '0'
#define DELETE '1'
#define SEARCH '2'
#define SHOWALL '3'
#define FINISH '4'

static int state = 0;

typedef struct phonebook {
    char phoneNumber[20];
    char name[20];
    char address[1000];
} Phonebook;


//void deleteBuffer(void){
//    while(getchar() != EOF);
//}
void printPerson(Phonebook phonebook);

void bubbleSorting(Phonebook phonebookArray[PHONEBOOK_SIZE]) {

    int bechanged = 0;
    for (int i = state; i >= 0; i--) {
        bechanged = 0;
        for (int e = 0; e < i; e++) {
            if (0 < strncmp(phonebookArray[e].name, phonebookArray[e + 1].name,strlen(phonebookArray[e].name))) {
                Phonebook tmp = phonebookArray[e];
                phonebookArray[e] = phonebookArray[e + 1];
                phonebookArray[e + 1] = tmp;
                bechanged = 1;
            }
        }
        if (bechanged == 0) {
            break;
        }
    }
}

void insert(Phonebook phoneArray[PHONEBOOK_SIZE]) {

    if (state < PHONEBOOK_SIZE) {
        Phonebook phonebook;
        printf("이름을 입력하세요: ");
        scanf("%s", phonebook.name);
        getchar();

        printf("전화번호를 입력하세요: ");
        scanf("%s", phonebook.phoneNumber);
        getchar();

        printf("주소를 입력하세요: ");
        char address[1000];
        fgets(address, sizeof(address), stdin);
        strcpy(phonebook.address, address);
        phoneArray[state] = phonebook;
        bubbleSorting(phoneArray);
        state++;


    } else {
        printf("\n최대 크기를 초과했습니다.\n");
    }

}


Phonebook delete(Phonebook phoneArray[PHONEBOOK_SIZE]) {

    Phonebook phonebookForDelete;
    int delete = 0;
    if (state != 0) {

        char name[20];
        printf("삭제할 인간의 이름을 입력하세요");
        scanf("%s", name);
        getchar();


        for (int i = 0; i < state; i++) {

            if (strncmp(name, phoneArray[i].name, strlen(name)) == 0) {
                delete = i;
                phonebookForDelete = phoneArray[i];
                state = state - 1;
            }

        }
        for (int e = 0; e < state; e++) {
            if (delete >= e) {
                phoneArray[e] = phoneArray[e + 1];
            }
        }

        return phonebookForDelete;
    }


}


Phonebook findPerson(Phonebook phonebookArray[PHONEBOOK_SIZE]) {

    Phonebook phonebookLookingFor;

    printf("찾는 사람의 이름을 입력하세요");

    char name[20];
    scanf("%s", name);
    getchar();
    int succ = 0;

    for (int i = 0; i < PHONEBOOK_SIZE; i++) {
        if (strncmp(phonebookArray[i].name, name, strlen(name)) == 0) {
            phonebookLookingFor = phonebookArray[i];
            succ = 1;
            printPerson(phonebookLookingFor);

        }
    }

    if (succ) printf("찾는 사람이 없습니다");


}

void printPerson(Phonebook phonebook) {

    printf("name: %s\n", phonebook.name);
    printf("phoneNumber: %s\n", phonebook.phoneNumber);
    printf("address: %s\n", phonebook.address);
}

void showAll(Phonebook phonebookArray[PHONEBOOK_SIZE]) {
    if (state != 0) {
        for (int i = 0; i < state; i++) {
            printf("\n\n=============================================\n");
            printPerson(phonebookArray[i]);
            printf("\n=============================================\n\n");
        }
    }

}


int main() {
    char answer = '100';
    Phonebook phonebook[PHONEBOOK_SIZE];

    while (answer != FINISH) {

        printf("INSERT:0  DELETE:1 , SEARCH:2 , SHOWALL:3 , FININSH: 4 \n");
        scanf("%c", &answer);
        getchar();

        switch (answer) {
            case INSERT:
                insert(phonebook);
                break;
            case SEARCH:
                printPerson(findPerson(phonebook));
                break;
            case DELETE:
                delete(phonebook);
                break;
            case SHOWALL:
                showAll(phonebook);
                break;
            case FINISH:
                printf("전화번호부를 종료합니다.");
                break;
        }
    }

}
