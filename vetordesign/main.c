#include <stdio.h>
#include <stdlib.h>
int main()
{
float al[5][2],media[5],M[5];
char nome[5][50];

printf("\n\n|||Notas alunos|||\n");

for(int x=0;x<5;x++){

media[x] = 0;
printf("\nPor so nomes de 6 letras");
printf("\n_____________\n\n  Nome aluno: ");
fflush(stdin);
gets(nome[x]);

for(int y=0;y<2;y++){

printf("\n  -> Aluno[%s]\n  -> Nota[%i]: ",nome[x],y+1);
scanf("%f",&al[x][y]);
media[x] += al[x][y];
}
M[x] = media[x]/2;
system("cls");
}
printf("\n\t |Aluno | Nota1 | Nota2 | Media|\n");

for(int x=0;x<5;x++){
printf("\t |%-6s| %-12.1f| %-12.1f| %-12.1f|\n",nome[x],al[x][0],al[x][1],M[x]);
}
}
