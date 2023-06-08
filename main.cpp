#include "mbed.h"
#include "HEPTA_EPS.h"
HEPTA_EPS eps(PA_0,PA_4);
Serial pc(USBTX,USBRX,9600);
int main()
{
    float bt;
    for(int i=0;i<10;i++) {
        eps.vol(&bt);
        pc.printf("Vol = %f\r\n",bt);
        wait(1);
    }
}