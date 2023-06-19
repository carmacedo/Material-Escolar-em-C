#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[3][2], i,j, soma=0, equipaMaiorMedia = 0;
    float  media = 0, maiorMedia = 0;
    for(i=0;i<3;i++)
    {
        printf("Equipa %i\n",i+1);
        for(j=0;j<2;j++)
        {
            printf("Digite golos da %i Jornada\n", j+1);
            scanf("%i",&vetor[i][j]);
            soma+=vetor[i][j];
        }
        media = soma / 2;
        printf("\nMédia da equipa %d: %.2f", i + 1, media);
        if (media > maiorMedia){
            maiorMedia = media;
            equipaMaiorMedia = i;
        }
        printf("--> Total de golos %i\n",soma);
        soma=0;
        media = 0;
        printf("---------------------------------\n");
    }
    printf("\nA equipa %d ganhou com %.2f de media.", equipaMaiorMedia + 1, maiorMedia);
    return 0;
}
