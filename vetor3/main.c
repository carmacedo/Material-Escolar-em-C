#include <stdio.h>
#include <stdlib.h>
int main()
{

    int idade[5];//vetor unidimensional
    int i, a=0, b=0;

    printf("Quantos alunos tem a turma\n");
    scanf("%i",&qta);
    printf("Digite idade dos alunos\n");
    for(i=0;i<;i++)
    {
        scanf("%i",&idade[i]);
        if(idade[i]<18)
        {
            a++;
        }
        else{
            b++;
        }
    }
    printf("IDADE: \n");
     for(i=0;i<5;i++)
    {
     printf("--> %i\n",idade[i]);
    }
    printf("Menor de idade: %i\nMaior de idade: %i\n",a,b);



    return 0;
}
