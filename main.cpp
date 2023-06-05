#include "mbed.h"
#include "HEPTA_EPS.h"
HEPTA_EPS eps(PA_0,PA_4);
Serial pc(USBTX,USBRX,9600);
int main()
{
    float btvol;
    for(int i=0;i<10;i++) {
        eps.vol(&btvol);
        pc.printf("Voltage = %f\r\n",btvol);
        wait_ms(1000);
    }
}