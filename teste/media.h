#ifndef MEDIA_H_INCLUDED
#define MEDIA_H_INCLUDED

int media()
{
    int a=0,aluno;
    float medias;
    do{
    a=a+1;
    printf("Digite o valor da nota do aluno.\n");
    scanf("%i",&aluno);
    medias=medias+aluno;
    }while(a!=5);
    medias=medias/5;
    printf("O valor de media é %f",medias);
    return medias;
}

#endif // MEDIA_H_INCLUDED
