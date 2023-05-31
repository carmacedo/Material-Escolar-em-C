#ifndef CELCIUS_H_INCLUDED
#define CELCIUS_H_INCLUDED

int celcius(float farn)
{
    float celsius;
    celsius=((farn-32)*5)/9;
    printf("Corresponde a %f em graus celsius",celsius);
}

#endif // CELCIUS_H_INCLUDED
