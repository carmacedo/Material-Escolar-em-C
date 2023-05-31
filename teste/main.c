#include <stdio.h>
#include <stdlib.h>
#include "exer2.h"
#include "exer3.h"
#include "exer4.h"
#include "exer5.h"
#include "exer6.h"
#include "locale.h"
int main()
{
    int me,cont;
    setlocale(LC_ALL,"portuguese");
    do{
    system("cls");
    printf("Digite o numero do exercicio que pretende realizar.\n2.\n3.\n4.\n5.\n6.\n9.\n-->");
    scanf("%i",&me);
    switch(me)
    {
    case 2: exer2();break;
    case 3: exer3();break;
    case 4: exer4();break;
    case 5: exer5();break;
    case 6: hotel();break;


    default: printf("ERRO");break;
    }
    printf("Pretende continuar?\n1-sim\n2-não\n");
    scanf("%i",&cont);
    }while(cont==1);

    return 0;

}
