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
        printf("Digite a temperatura maxima do m�s %i.\n",b);
       scanf("%i",&temp[a][b]);
       mediamax+=temp[a][b];
    }
    printf("=Minimo=\n");
    for(a=1;a<13;a++)
    {
        printf("Digite a temperatura minima do m�s %i.\n",a);
       scanf("%i",&temp[a][b]);
       mediamin+=temp[a][b];
    }
    printf("=Temperaturas do m�s=\n");
    for(c=1;c<13;c++)
    {
        printf("Digite duas temperaturas do m�s %i.\n",c);
        scanf("%i%i",&temp1,&temp2);
        totaltemp[c]=(temp1+temp2)/2;
    }
    printf("=Media por m�s=\n");
    for(c=1;c<13;c++)
    {
        printf("A m�dia do m�s %i foi %i.\n",c,totaltemp[c]);
    }
    mediamax/=12;
    mediamin/=12;
    printf("A media maxima do ano foi - %i �.\n A media minima do ano foi - %i �.",mediamax,mediamin);
    return 0;
}
