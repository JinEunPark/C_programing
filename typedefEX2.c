//
//  main.c
//  typedefEX2
//
//  Created by 박진은 on 2022/05/18.
//

#include <stdio.h>
typedef struct person {
    char name[20];
    char address[100];
}PERSON;

struct point{
    int posx;
    int posy;
};
typedef struct point POINT;


int main(int argc, const char * argv[]) {
    
    PERSON man = {"qkrwlsldms","ghddmsehd"};
    POINT p1 = {12,12};
    printf("%s %s\n",man.name,man.address);
    printf("%d %d\n",p1.posx, p1.posy);
    
    return 0;
}
