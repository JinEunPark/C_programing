#include <stdio.h>

typedef struct point {
    int posx;
    int posy;
} Point;

void showPos(Point point) {
    printf("[%d , %d]", point.posx, point.posy);
}

void orgSymTrans(Point *ptr) {
    ptr->posx = (ptr->posx) * -1;
    ptr->posy = (ptr->posy) * -1;
}
void swapPoint(Point *point,Point *point2){
    Point tmp = *point;
    (*point).posx = (*point2).posx;
    point->posy = point2->posy;
    point2 -> posx = tmp.posx;
    point2->posy = tmp.posy;

}

int main() {
    Point pos = {1, 2};
    showPos(pos);
    orgSymTrans(&pos);
    showPos(pos);
    printf("\n");

    Point p1 = {1,2}, p2 = {3,4};
    showPos(p1);

    showPos(p2);
    swapPoint(&p1,&p2);
    printf("\n");
    printf("값을 바꿈:");
    showPos(p1);
    showPos(p2);
    return 0;
}
