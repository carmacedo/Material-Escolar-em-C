#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,nota1[10]={10,2,16,4,8,20,9,14,12,10};
    int nota2[10]={15,2,9,11,19,14,18,6,5,20};
    float media=0;

    for(i=0;i<10;i++)
    {
        printf("Aluno %i\n",i+1);

        printf("nota teste1: %i\n nota teste2: %i\n",i+1,nota1[i],nota2[i]);

        printf("-----------------\n");
    }

    for(i=0;i<10;i++){
        media=(nota1[i] + nota2[i])/ 2;
         if (media>10){
            printf("\n Nota do Aluno %i = %f    Aprovado!\n",i+1,media);
         }
         else {
            printf("\n Nota do Aluno %i = %f    Reprovado!\n",i+1,media);
         }
    }
  /*  printf("qual a nota que deseja ver?");
    scanf("%i",&a);
    a=a-1;
    printf ("nota1:%i \nnota2: %i\n",nota1[a],nota2[a]);*/

    printf("nota 1:%i nota2: %i",nota1[5], nota2[5]);

    return 0;
}
