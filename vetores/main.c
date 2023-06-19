#include <stdio.h>
#include <stdlib.h>
// 1- Construa um codigo que inicialize e mostre os elementos do
//vetor s coma seguinte sequencia
//{1,2,3,4,5,0,0,0,0,0 }
//2-
int main()
{
    /*
    int i, nota[5];
    printf("Digite 5 valores\n");

    for(i=0;i<5;i++)
    {
        scanf("%i",&nota[i]);
    }
    printf("Estes sao os valores Digitados\n");
    for(i=0;i<5;i++)
    {
        printf("-> %i\n",nota[i]);
    }
    */
    int s[10] = {1,2,3,4,5,0,0,0,0,0};
    int soma = 0;
    for (int i = 0; i < 10; i++){
        soma += s[i];
    }
    printf("Soma total: %d\n", soma);
    printf("-->%i",s[4]);
    return 0;
}
