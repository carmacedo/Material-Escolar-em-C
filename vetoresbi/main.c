#include <stdio.h>
#include <stdlib.h>

int main()
{
char nomeMes[12][3] = {"jan", "fev", "mar",
 "abr", "mai","jun", "jul", "ago", "set",
 "out", "nov", "dez"};
for (int i=0; i<12; i++)
    {
        printf("%i-", (i+1));
for (int j=0; j<3; j++)
    {
        printf("%c", nomeMes[i][j]);
    }

printf("\n");
    }}
/*
int matriz[3][3], i, j;
for (i=0; i<3; i++)
for (j=0; j<3; j++){
printf("Informe o valor da linha %d, coluna %d.\n", i, j);
scanf("%i", &matriz[i][j]);
}
for (i=0; i<3; i++){
for (j=0; j<3; j++)
printf("%i ", matriz[i][j]);
printf("\n");
}
}*/





