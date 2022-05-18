#include <stdio.h>

typedef struct point {
    int posx;
    int posy;
} Point;

Point addPoint(Point point1, Point point2) {
    Point repoint = {point1.posx + point2.posx, point1.posx + point2.posy};
    return repoint;
}

Point minPoint(Point point1, Point point2) {
    Point repoint = {point1.posx - point2.posx, point1.posy - point2.posy};
    return repoint;
}
void swapPoint(Point *point1, Point *point2){

    int locaition1 = point1->posx;
    int locaition2  = point1 ->posy;
    point1->posx = point2->posx;
    point1->posy = point2->posy;
    point2 ->posx = locaition1;
    point2 -> posy = locaition2;

}

void showpoint(Point point) {

    printf("location : [%d  ,  %d]\n", point.posx, point.posy);

}

int main() {
    Point point = {123, 123};
    Point point1 = {1, 100};
    Point result;
    result = addPoint(point, point1);
    showpoint(result);
    result = minPoint(point1,point);
    showpoint(result);
    printf("before the swap the location: point");
    showpoint(point);
    printf("before the swap the location : point1");
    showpoint(point1);
    printf("\nafter the swap:\n");
    swapPoint(&point, &point1);//구조체 포인터를 사용하기 때문에 파라미터로 주소를 전달해야한다.
    showpoint(point);
    showpoint(point1);

}
