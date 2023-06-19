#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>


int main()
{
    setlocale(LC_ALL,"portuguese");
    textcolor(WHITE);
    float nota[5][2], media[5];
    for(int a=0;a<5;a++){
        for(int b=0;b<2;b++)
        {   do{
            printf("Digite a %iª nota do aluno %i\n» ", b+1, a+1);
            scanf("%f",&nota[a][b]);
            if(nota[a][b]<0 || nota[a][b]>20)
            {
                textcolor(LIGHTRED);
                printf("ERRO - Valor Inválido\n");
                textcolor(WHITE);
            }

        }while(nota[a][b]<0 || nota[a][b]>20);
            media[a]+=nota[a][b];
        }
    system("cls");
    }
    for(int a=0;a<5;a++)
    {
        media[a]/=2;
        if (media[a]>=10)
        {   textcolor(LIGHTGREEN);
            printf("Aluno %i - Média = %.2f - Aprovado\n", a+1, media[a]);
            textcolor(WHITE);  }
        else if(media[a]<10)
        {  textcolor(LIGHTRED);
            printf("Aluno %i - Média = %.2f - Reprovado\n", a+1, media[a]);
            textcolor(WHITE);
        }}}
