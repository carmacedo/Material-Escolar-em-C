#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int age,a,menu;
    char nome[50];
    FILE *ficheiro;
    do{
            // MENU
    printf("---   MENU   ---");
    printf("Digite o Exercicio que deseja fazer:\n Exercicio 1- Idades\n Exercicio 2- Texto e Nome\n Exercicio 3-Notas\n Exercicio 4-Produto de Comppra\n");
    scanf("%i",&menu);
    fflush(stdin);
    if(menu==1)
    {
        // EXERCICIO 1
        printf("digite a sua idade\n");
        scanf("%i",&age);
        fflush(stdin);
        if (age>17)
        {
            ficheiro = fopen ("maiordeidade.txt" , "a");
            fprintf(ficheiro,"%i\n",age);
        }
        else
        {
            ficheiro = fopen ("menores.txt" , "a");
            fprintf(ficheiro,"%i\n",age);
        }
    }else if(menu==2)
    {
        // EXERCICIO 2
        printf("Digite o seu nome\n");
        scanf("%s",&nome);
        fflush(stdin);
        ficheiro=fopen("recuperacao.txt","a");
            fprintf(ficheiro,"Hoje estamos a fazer teste de Recuperação\n %s",&nome);
            fclose(ficheiro);

    } else if(menu==3)
    {
        int e;
        char nome [25];
        float nota;
        FILE *notas;
        notas=fopen("notas.txt", "a+");
        while(fscanf(notas,"%s   %f",&nome,&nota) !=EOF)
            printf("%s   %f\n",nome,nota);
        fclose(notas);
        printf("Deseja acrescentar mais alguma nota?\n1-Sim\n2-Não\n");
         scanf("%i", &e);
         fflush(stdin);
         if (e==1)
         {
              notas=fopen("notas.txt", "a+");
             printf("Digite seu nome\n");
              gets(nome);
             printf("E sua nota\n");
              scanf("%f", &nota);
              fflush(stdin);
             fprintf(notas,"\n%s   %.2f", nome, nota);
             fclose(notas);
         }
    } else if(menu==4){

        // EXERCICIO 4
        char nn[50];
        FILE *ficheiro;
        ficheiro = fopen("mercado.txt", "w");
        printf("\n Insira o Nome e o Preço do Produto : ");
        gets(nn);
        fprintf(ficheiro,"%s",nn);
        fclose(ficheiro);

    }
            // LOOP VOLTAR
        printf("deseja continuar\n1-sim\n2-nao");
        scanf("%i",&a);
        fflush(stdin);
    }while(a==1);

    return 0;
}
