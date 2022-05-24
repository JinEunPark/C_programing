#include <stdio.h>
typedef struct point//구조체를 정의
{
    int xpos;
    int ypos;

}Point;//구조체의 새로운 자료형이름
void showPosition(Point point){//struct Point 를 출력하는 함수
    printf("[%d , %d]\n",point.xpos, point.ypos);
}
Point getCurrentPosition(){
    Point point;
    printf("input location of x:");
    scanf("%d",&point.xpos);
    printf("\ninput location of y:");
    scanf("%d",&point.ypos);
    return point;
}
int main() {
    Point pos = getCurrentPosition();
    showPosition(pos);
    Point pos2;
    pos2 = pos;
    showPosition(pos2);//struct 로 대입연산을 실행하면 동일하게 맴버데 맴버로 복사가 이루어 진다.
}
