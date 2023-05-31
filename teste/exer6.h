#ifndef EXER6_H_INCLUDED
#define EXER6_H_INCLUDED
#include "calculos.h"
int hotel()
{
    int quarto,espacon=30,ind,dup,a,calculo,prec;

    do{
    printf("Que tipo de quarto pretende?\n1-Duplo(25,00€)\n2.Individual(20,00€)\n");
    scanf("%i",&quarto);
    if(espacon<=30 && espacon>0)
    {
    if(quarto==1)
    {
        prec=25;
        dup=dup+1;
        espacon=espacon-1;
        calculo=calculos(prec);
    }
    else
    {
        prec=20;
        ind=ind+1;
        espacon=espacon-1;
        calculo=calculos(prec);
    }
    }
    else
    {
        printf("O Hotel está cheio");
    }
    printf("Quartos livres:%i\nQuartos Individuais(ocupados):%i\nQuartos Duplos(ocupados):%i\n",espacon,ind,dup);
    printf("O hotel já fez %i euros hoje.\n",calculo-2);
    printf("Pretende continuar?\n1-sim\n2-não\n");
    scanf("%i",&a);
    }while(a==1);
}

#endif // EXER6_H_INCLUDED
