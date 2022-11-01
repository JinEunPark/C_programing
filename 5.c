#include <utime.h>
#include <time.h>
#include <printf.h>

int getYear(int year) {//년도를 반환하는 함수 1900년도가 기준이기 때문에 1900을 더해서 값을 반환함
    return year + 1900;
}

int getMonth(int month) {//달을 반환하는 함수를 사용함 1을 더해야 해
    return month + 1;
}

int getMonDay(int monDay) {//일을 반환하는 함수

    return monDay;
}

char *getWeakDay(int weakDay) {//요일 별로 0~7로 상수가 들어오면 이를 요일 문자열로 바꿔서 반환하는 함수
    char *date;

    switch (weakDay) {
        case 0:
            date = "월";
            break;
        case 1:
            date = "화";
            break;

        case 2:
            date = "수";
            break;

        case 3:
            date = "목";
            break;

        case 4:
            date = "금";
            break;

        case 5:
            date = "토";
            break;

        case 6:
            date = "일";
            break;

        default:
            date = "invaild format";

    }
    return date;
}

int getHour(int hour) {//시간을 반환하는 함수
    return hour;
}

int getMin(int min) {//분을 반환하는 함수
    return min;
}

int getSec(int sec) {//초를 반환하는 함수
    return sec;
}

int main(void) {
    struct tm *tm;//시간을 형식에 따라서 저장할 tm 구조체 선언
    time_t timep;//시간을 초단위로 저장하는 변수

    time(&timep);//포인터를 인자로 넘겨서 상수로 받음
    tm = localtime(&timep);

    printf("%d. %d. %d. (%s) %d:%d:%d KST\n", getYear(tm->tm_year),getMonth(tm->tm_mon), getMonDay(tm->tm_mday),
           getWeakDay(tm->tm_wday), getHour(tm->tm_hour), getMin(tm->tm_min), getSec(tm->tm_sec));

}
//
// Created by 박진은 on 2022/10/31.
//
