#include <stdio.h>
#include <string.h>

#define CRT_SECURE_NO_WARNINGS
#define S 50

void printWord(char word[][S], int colum) {

    printf("[");

    for (int i = 0; i < colum; i++) {

        printf("%s ", word[i]);
    }

    printf("]");
}

void listSorting(char list[][S],int colum){

    int i, j,least;
    char tmp[50];

    for( i = 0; i< colum-1; i++){

         least = i;

         for(j = i+1; j< colum; j++){

             if(strcmp(list[j],list[least]) < 0 ){
                 least = j;
             }
         }

         if(least != i){
             strcpy(tmp,list[i]);
             strcpy(list[i],list[least]);
             strcpy(list[least],tmp);
         }

    }

}
int main() {

    char word[5][50];

    for (int i = 0; i < 5; i++) {
       scanf("%s",word[i]);
    }

    printWord(word,5);
    listSorting(word,5);
    printWord(word,5);
}
