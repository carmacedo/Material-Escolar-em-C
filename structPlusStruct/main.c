#include <stdio.h>
#include <stdlib.h>

struct escola{

    int a;

    struct alunos{
        char nome[20];
        int idade;
    }
}Escola;


int main()
{
    printf("Digite o nome do Aluno!\n--> ");
    gets(Escola.nome);
    printf("Digite a idade do aluno %s\n",Escola.nome);
    scanf("%i", &Escola.idade);
    fflush(stdin);
    printf("Digite Algo\n--> ");
    scanf("%i", &Escola.a);
    fflush(stdin);
    printf("O Aluno %s tem %i anos!\nFoi digitado --> %i",Escola.nome,Escola.idade,Escola.a);
    return 0;
}
