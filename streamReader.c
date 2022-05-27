#include <stdio.h>

int main() {
    FILE *file = fopen("/Users/bagjin-eun/Desktop/스크린샷 2022-05-26 오후 5.32.29", "rt");//파일을 읽어서 포인터를 반환
    FILE *file2 = fopen("/Users/bagjin-eun/Desktop/스크린샷 2022-05-26 오후 5.05.14", "wt");
    char buf[100];//읽어드린 문자열을 저장할 버퍼
    int readCnt;//읽어드린 데이터의 갯수를 저장할 변수

    if (file == NULL || file2 == NULL) {//fopen 함수는 파일을 읽는데 실패하면 null을 반환하는데
        // 이를 이용해서 둘중에 하나라도 null이면 파일을 읽는데 싪패한거임
        puts("파일오픈 실패");
        return -1;
    }
    while (1) {
        readCnt = fread((void *) buf, 1, sizeof(buf), file);//파일을 읽은 데이터수를 반환한다.

        if (readCnt < sizeof(buf)) {//읽어드린 데이터의 갯수가 읽은 데이터의 갯수보다 작을경우 여기서는 sizeof(buf)가 일어드릴갯수인데
            //그이유는 char형이기 때문이다

            if (feof(file) != 0) {//feof(file)은 파일에 마지막까지 참조했으면 0이 아닌값을 반환한다.
                fwrite((void *) buf, 1, readCnt, file2);
                puts("file copy comlete");
                break;
            } else {
                puts("file copy fail");
                break;
            }
        }
        fwrite((void *) buf, 1, sizeof(buf), file2);
    }

    fclose(file);
    fclose(file2);
    return 0;

}
