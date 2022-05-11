#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void failswapIntPtr(int *ptr, int* ptr2){
    int * tmp = ptr;
    ptr = ptr2;
    ptr2 = tmp;
}
void succedSwap(int ** ptr, int ** ptr2){//함수가 호출될 때 부터 포인터변수의 주소값을 저장해야해서 더블 포인터 변수로 선언함
    int * tmp = *ptr;//전달받은 포인터가 가지고 있던 주소값을 tmp** 변수에 저장.
    *ptr = *ptr2;
    *ptr2 = tmp;
}
void printArray(int *list,int size){

    printf("[");
    for(int i = 0; i< size; i++){
        printf("%d ",list[i]);
    }
    printf("]\n");
}
void maxAndmin(int* arr, int size){

    int *minp = &arr[0], *maxp = &arr[0];
    int max = arr[0], min = arr[0];

    for(int i = 0; i< size; i++){
        if(max < arr[i]){
            max = arr[i];
            maxp = &arr[i];
        }
        if( min > arr[i]){
            min = arr[i];
            minp = &arr[i];
        }
    }

    *minp = max;
    *maxp = min;

}

void makeArr(int*list,int size){

    for(int i  = 0; i< size; i++){
        list[i] = rand()%100;
    }
}
int main() {

    srand((unsigned)time(NULL));

    int ** dptr;
    int * ptr;
    int sum = 3;
    ptr = &sum;
    dptr = &ptr;
    printf("변수 sum의 주소값:%p\n",&sum);
    printf("ptr 변수 안에 들어있는 sum의 주소값:%p\n",ptr);
    printf("*ptr이 가르키는 값: %d\n",*ptr);
    printf("ptr포인터 변수 내부에 저장되어있는 변수 sum의 주소값 :%p\n",ptr);
    printf("dptr 변수안에 저장되어있는 ptr변수 자체의 주소값 :%p\n",dptr);
    printf("ptr에 할당되어있는 주소값 %p\n",&ptr);
    printf("*dptr에 저장되어 있는 포인터 변수 ptr안에 저장되어있는 변수 sum의 주소값으을 참조함 : %p\n",*dptr);
    printf("**dptr안에 저장되어 있는 변수 sum의 값 :%d\n",**dptr);

    int* ptr1 , *ptr2;
    int one = 1, two = 2;
    ptr1 = &one;
    ptr2 = &two;
    printf("주소를 바꾸기전 one:%d , two: %d  주소를 바꾸기전 내부에 들어 있는 주소값 ptr1:%p  ptr2:%p\n",*ptr1,*ptr2,ptr1,ptr2);
    failswapIntPtr(&ptr1,&ptr2);
    printf("swap후  one:%d , two: %d  swap 후 내부에 들어 있는 주소값 ptr1:%p  ptr2:%p",*ptr1,*ptr2,ptr1,ptr2);//주소값이 변경이 안됨.
    printf("\n\n\n\n");
    printf("주소를 바꾸기전 one:%d , two: %d  주소를 바꾸기전 내부에 들어 있는 주소값 ptr1:%p  ptr2:%p\n",*ptr1,*ptr2,ptr1,ptr2);
    succedSwap(&ptr1,&ptr2);
    printf("swap후  one:%d , two: %d  swap 후 내부에 들어 있는 주소값 ptr1:%p  ptr2:%p\n",*ptr1,*ptr2,ptr1,ptr2);//주소값이 변경이 안됨.


    int a,b,c;
    int *p1=&a, *p2=&b, *p3=&c;
    int *ptrArray[3] = {p1,p2,p3};
    int **ddptr = ptrArray;
    printf("%d %d %d\n ",ptrArray[0],ptrArray[1],ptrArray[2]);
    printf("%d %d %d\n",ddptr[0],ddptr[1],ddptr[2]);

    int list[10] = {};
    makeArr(list,10);
    printArray(list,10);
    maxAndmin(list,10);
    printArray(list,10);


}
