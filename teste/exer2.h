#ifndef EXER2_H_INCLUDED
#define EXER2_H_INCLUDED
#include "bonus.h"
int exer2()
{
int vendas;
float salario,perc;
printf("Digite o seu salário\n");
scanf("%f",&salario);
printf("Digite o seu numero de vendas\n");
scanf("%i",&vendas);
if(vendas>1000)
{
    perc=0.10;
    bonus(perc,salario);
}
else
{
    perc=0.05;
    bonus(perc,salario);
}


}

#endif // EXER2_H_INCLUDED
