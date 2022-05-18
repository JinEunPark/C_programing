//
//  main.c
//  StructerPointer
//
//  Created by 박진은 on 2022/05/18.
//

#include <stdio.h>
struct point {
    int posx;
    int posy;
};
struct circle{
    double radius;
    struct point *center;//원의 중심 나타내기 위해서 sturct point를 사용함.
};

int main(int argc, const char * argv[]) {
    struct point p1, *sptr;
    p1.posx = 100;
    p1.posy = 200;
    printf("present location: %d  %d\n",p1.posx, p1.posy);
    sptr = &p1;
    sptr->posx = 500;
    (*sptr).posy = 1000;
    printf("variation of struct pointer: %d %d ",(*sptr).posx, (*sptr).posy);
    
    double radius = 20.12;
    struct point center={100, 200};
    struct circle cir = {radius,&center};
    printf("\n infomation of circle: radius: %lf posx:%d posy:%d \n",cir.radius, cir.center->posx, (*cir.center).posx);
}
