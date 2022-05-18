#include <stdio.h>

typedef struct point {
    int posx;
    int posy;
} Point;

void printPoint(Point point) {
    printf("current location is : [ %d , %d ]\n", point.posx, point.posy);
}

void changeLocation(Point *pptr1, Point *pptr2) {
    int locationtmpx = pptr1->posx;
    int locationtmpy = pptr2->posy;
    pptr1->posx = pptr2->posx;
    pptr1->posy = pptr2->posy;
    pptr2->posx = locationtmpx;
    pptr2->posy = locationtmpy;

}

int main() {
    Point point = {12, 123};
    Point point1 = {1234, 34523};
    printPoint(point);
    printPoint(point1);
    changeLocation(&point, &point1);
    printPoint(point);
    printPoint(point1);
}
