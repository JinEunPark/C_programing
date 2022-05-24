#include <stdio.h>
#include <math.h>
typedef struct point{
    int posx;
    int posy;
}Point;
typedef struct rectangle{
    Point ldpoint, rtpoint;
}Rectangle;
int cal_area(Rectangle rectangle){

    double wide = (double)(rectangle.rtpoint.posx - rectangle.ldpoint.posx)*(rectangle.rtpoint.posy - rectangle.ldpoint.posy);
    return wide;
}
void showRectangle(Rectangle rectangle){
    double area  = cal_area(rectangle);
    printf("area of rectangle: %lf\n",area);
    printf("p1: ( %d , %d)\n",rectangle.ldpoint.posx,rectangle.ldpoint.posy);
    printf("p2: ( %d , %d)\n",rectangle.rtpoint.posx,rectangle.rtpoint.posy);
    printf("p3: ( %d , %d)\n",rectangle.ldpoint.posx,rectangle.rtpoint.posy);
    printf("p4: ( %d , %d)\n",rectangle.rtpoint.posx,rectangle.ldpoint.posy);
}
int main() {
Rectangle rectangle={{0,0},{100,100}};
    showRectangle(rectangle);
}
