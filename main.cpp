#include "mbed.h"
#include "LITE_EPS.h"

RawSerial pc(USBTX,USBRX,9600);
LITE_EPS eps(PA_0,PA_4);

int main()
{
    float bt;
    for(int i = 0; i < 10; i++) {
        eps.vol(&bt);
        pc.printf("Vol = %f\r\n",bt);
        wait(1.0);
    }
}