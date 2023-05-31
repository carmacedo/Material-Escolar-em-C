#ifndef BONUS_H_INCLUDED
#define BONUS_H_INCLUDED

int bonus(float per,float salar)
{
    float bonusrese;
    bonusrese=salar+(salar*per);
    printf("Vai receber %f euros.\n",bonusrese);
    return 0;
}

#endif // BONUS_H_INCLUDED
