#include <stdio.h>
#include <string.h>

#define INSERT '0'
#define DELETE '1'
#define FIND '2'
#define SHOWALL '3'
#define FINISH '4'
#define PHONEBOOKSIZE 100
static int current_size = 0;
typedef struct phonebook {
    char name[30];
    char address[100];
    char phoneNumer[100];
} Phonebook;
void showPhonebook(Phonebook phonebook);
void getUser(Phonebook* phonebook) {

    printf("input name: ");
    scanf("%s", phonebook->name);
    getchar();
    printf("input address: ");
    fgets(phonebook->address, sizeof(phonebook->address), stdin);
    phonebook->address[strlen(phonebook->address) - 1] = 0;
    printf("input phoneNumber: ");
    scanf("%s", phonebook->phoneNumer);
    getchar();

}

Phonebook fineUser(Phonebook phonebook[PHONEBOOKSIZE]) {//찾는 사람의 객체를 반환하는 함수

    printf("input the name that you looking for: ");
    char fname[30];

    scanf("%s", fname);
    getchar();
    for (int i = 0; i < current_size; i++) {
        if (strcmp(phonebook[i].name, fname) == 0) {
            showPhonebook(phonebook[i]);
        }
    }
}
void showPhonebook(Phonebook phonebook){
    printf("=========================================\n");
    printf("name: %s\n",phonebook.name);
    printf("address: %s\n",phonebook.address);
    printf("phone number: %s\n",phonebook.phoneNumer);
}
void showAllPhonebook(Phonebook phonebook[PHONEBOOKSIZE]){
    for(int i = 0; i <current_size; i++){
        showPhonebook(phonebook[i]);
    }
}
void deletePhonebook(Phonebook phonebook[PHONEBOOKSIZE]) {

    char deName[30];

    printf("input name for delete:");
    scanf("%s", deName);
    getchar();

    int indexForDelete = 0;
    Phonebook personForDelete;

    for (int i = 0; i < current_size; i++) {

        if (strcmp(phonebook[i].name, deName) == 0) {
            indexForDelete = i;
            personForDelete = phonebook[i];
            current_size--;
        }
    }

    if (indexForDelete == 1001) {
        printf("there is no information about %s", deName);
        return;
    } else {
        for (int i = indexForDelete; i < current_size; i++) {
            phonebook[i] = phonebook[i + 1];
        }
        return;

    }
}

int main() {
    Phonebook phonebook[PHONEBOOKSIZE];
    char answer;
    int turnoff = 1;
    while (turnoff != 0) {
        printf("input command(insert: \' 0 \'  delete: \'1\' FIND: \'2\' SHOWALL: \'3\' FINISH: \'4\'): ");
        scanf("%c", &answer);
        getchar();

        switch (answer) {
            case INSERT:
                if (current_size > PHONEBOOKSIZE) {
                    printf("over the max size please delete");
                    break;
                } else {
                    getUser(&phonebook[current_size]);
                    current_size++;
                    break;
                }

            case DELETE:
                deletePhonebook(phonebook);
                break;
            case FIND:
                fineUser(phonebook);
                break;
            case SHOWALL:
                showAllPhonebook(phonebook);
                break;
            case FINISH:
                printf("finish program\n");
                turnoff = 0;
                break;

            default:
                break;
        }

    }


    FILE *file = fopen("/Users/bagjin-eun/CLionProjects/untitled30/phonebook.bin","wb");
    fwrite((void*)phonebook,sizeof(phonebook[0]),current_size,file);
    puts("save complete");
    fclose(file);

    FILE *file2 = fopen("/Users/bagjin-eun/CLionProjects/untitled30/phonebook.bin","rb");
    Phonebook newPhonebook[PHONEBOOKSIZE];
    puts("read again at the phonebook.bin");
    fread((void*)newPhonebook,sizeof(phonebook[0]),current_size,file2);
    showAllPhonebook(newPhonebook);
    fclose(file2);


}
