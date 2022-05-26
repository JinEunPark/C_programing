#include<stdio.h>
int eventFlag;
typedef enum arqEvent
{
    arqEvent_dataTxDone = 0,//데이터 전송완료
    arqEvent_ackTxDone = 1,
    arqEvent_ackRcvd = 2,
    arqEvent_dataRcvd = 3,
    arqEvent_dataToSend = 4,//데이터를 보냄
    arqEvent_arqTimeout = 5
} arqEvent_e;

void arqEvent_setEventFlag(arqEvent_e event)
{
    eventFlag |= (0x01 << event);
}

void arqEvent_clearEventFlag(arqEvent_e event)
{
    eventFlag &= ~(0x01 << event);
}
void arqEvent_clearAllEventFlag(void)
{
    eventFlag = 0;
}

int arqEvent_checkEventFlag(arqEvent_e event)
{
    return (eventFlag & (0x01 << event));
}
int main(void){
    arqEvent_clearAllEventFlag();
    printf("1:%d\n",eventFlag);
    arqEvent_setEventFlag(arqEvent_dataToSend);
    printf("2:%d\n",eventFlag);
    printf("%d\n",arqEvent_checkEventFlag(arqEvent_dataToSend));
    arqEvent_clearEventFlag(arqEvent_dataToSend);
    printf("3:%d\n",eventFlag);
    printf("%d\n",arqEvent_checkEventFlag(arqEvent_dataTxDone));
    arqEvent_setEventFlag(arqEvent_dataTxDone);
    printf("4:%d\n",eventFlag);
    printf("%d",arqEvent_checkEventFlag(arqEvent_ackTxDone));
    printf("%d\n",arqEvent_checkEventFlag(arqEvent_dataTxDone));
    arqEvent_clearEventFlag(arqEvent_dataTxDone);
    printf("5:%d\n",eventFlag);
    arqEvent_setEventFlag(arqEvent_arqTimeout);
    printf("5:%d\n",eventFlag);
    arqEvent_clearEventFlag(arqEvent_arqTimeout);
    printf("6:%d\n",eventFlag);




}
