//
//  main.c
//  linkStruct
//
//  Created by 박진은 on 2022/05/18.
//

#include <stdio.h>
struct point{
    int posx;
    int posy;
    struct point *link;//구조체 내부에 자체 구조체 포인터 선언
};
int main(int argc, const char * argv[]) {
    
    struct point p1 = {1,2};
    struct point p2 = {3,4};
    struct point p3 = {5,6};
    
    p1.link = &p2;
    p2.link = &p3;
    p3.link = &p1;
    
    printf("point1 : %d %d link to point2: %d %d\n",p1.posx, p1.posy, p1.link->posx, p1.link->posy);
    printf("point2 : %d %d link to point3: %d %d\n",p2.posx, p2.posy, p2.link->posx,p2.link->posy);
    printf("point3 : %d %d link to point1: %d %d\n",p3.posx,p3.posy,p3.link->posx,p3.link->posy );
}
