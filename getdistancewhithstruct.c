//
//  main.c
//  20220517
//
//  Created by 박진은 on 2022/05/17.
//

#include <stdio.h>
#include<string.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS_
struct point {
    int xpos;
    int ypos;
};

int main(int argc, const char * argv[]) {
    
    struct point pos1, pos2;
    double distance;
    fputs("point1:",stdout);
    scanf("%d %d",&pos1.xpos, &pos1.ypos);
    fputs("input point2",stdout);
    scanf("%d %d",&pos2.xpos,&pos2.ypos);
    distance = sqrt(((double)(pos1.xpos - pos2.xpos)*(pos1.xpos - pos2.xpos)) + ((double)(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));
    printf("두 점사이의 거리는 %lf",distance);
    
}
