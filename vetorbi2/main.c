#include <stdio.h>
#include <stdlib.h>

int main()
{
int matriz[3][3], i, j;
for(i=0;i<3;i++)
for(j=0;j<3;j++){
printf("Informe o valor da linha %i, coluna %i.\n",i,j);
scanf("%i",&matriz[i][j]);
}
for (i=0; i<3; i++) {
for (j=0; j<3; j++)
printf("%i ",matriz[i][j]);
printf("\n");
}
printf("-->%i ", matriz[1][1]);
}
