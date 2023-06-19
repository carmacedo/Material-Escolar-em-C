#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int temp[12][12],mediamax ,mediamin,temp1,temp2,totaltemp[12],a,b,c;
    printf("=Maxima=\n");
    for(b=1;b<13;b++)
    {
        printf("Digite a temperatura maxima do mês %i.\n",b);
       scanf("%i",&temp[a][b]);
       mediamax+=temp[a][b];
    }
    printf("=Minimo=\n");
    for(a=1;a<13;a++)
    {
        printf("Digite a temperatura minima do mês %i.\n",a);
       scanf("%i",&temp[a][b]);
       mediamin+=temp[a][b];
    }
    printf("=Temperaturas do mês=\n");
    for(c=1;c<13;c++)
    {
        printf("Digite duas temperaturas do mês %i.\n",c);
        scanf("%i%i",&temp1,&temp2);
        totaltemp[c]=(temp1+temp2)/2;
    }
    printf("=Media por mês=\n");
    for(c=1;c<13;c++)
    {
        printf("A média do mês %i foi %i.\n",c,totaltemp[c]);
    }
    mediamax/=12;
    mediamin/=12;
    printf("A media maxima do ano foi - %i º.\n A media minima do ano foi - %i º.",mediamax,mediamin);
    return 0;
}
