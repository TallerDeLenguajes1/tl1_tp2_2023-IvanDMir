#include <stdio.h>
#include <stdlib.h>
#define TAMA 20

int main (){
    int i;
    float Arreglo[TAMA];
    float *punt=Arreglo;
    for (i=0;i<TAMA;i++){
        *punt=1+rand();
        printf("%.2f\n",Arreglo[i]);
        punt++;
    }
return 0;
}