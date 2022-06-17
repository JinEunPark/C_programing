#include <stdio.h>

typedef struct point {
    int posx;
    int posy;
} Point;

void SwapPoint(Point *point, Point *point1) {
    Point tmp = *point;
    *point = *point1;
    *point1 = tmp;
}

int main() {
    Point p1 = {1, 2};
    Point p2 = {3, 4};
    SwapPoint(&p1, &p2);
    printf("p1: %d %d,   p2: %d, %d", p1.posx, p1.posy, p2.posx, p2.posy);

}
