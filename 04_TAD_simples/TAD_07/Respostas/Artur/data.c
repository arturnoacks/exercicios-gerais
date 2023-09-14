#include <stdio.h>
#include "data.h"

tData CriaData(int dia, int mes, int ano){
    tData data = {dia, mes, ano};
    return data;
}

int VerificaDataValida(tData data){
    if(data.mes>1 || data.mes>12) return 0;


}

int VerificaBissexto(tData data){
    return !(data.ano%4);
}

int NumeroDiasMes(tData data){
    int dias;
    
    if(data.mes==1 || data.mes==3 || data.mes==5 || 
        data.mes==7 || data.mes==8 || data.mes==10 || data.mes==12) dias = 31;

    else if(data.mes==4 || data.mes==6 || data.mes==9 || data.mes==11) dias = 30;

    else if(data.mes==2) dias = 28;

    return dias;
}