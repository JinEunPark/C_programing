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

int main() {
Point pos = {1,2};
showPos(pos);
orgSymTrans(&pos);
showPos(pos);
}
