#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//�rjon C programot, amely k�l�n f�ggv�nyben ellen�rz�tt m�don beolvas egy hatv�nyalapot,
//ill. egy kitev�t.
//�rja meg a hatv�nyoz�st megval�s�t� f�ggv�nyt!

void int_beolvas_alap(int* x);
void int_beolvas_kitevo(int* y);
int hatvany(int alap, int kitevo);


int main()
{
    int szamAlap;
    int szamKitevo;
    int_beolvas_alap(&szamAlap);
    int_beolvas_kitevo(&szamKitevo);
    printf("A %d hatvanyerteke = %d\n", szamAlap, hatvany(szamAlap,szamKitevo));
    return 0;
}

void int_beolvas_alap(int* x)
{
    char ch;
    int rendben;

    do
    {
        rendben = 1;
        printf("Adja meg a hatvanyalapot: ");

        if(scanf("%d", x)!=1)
        {
            printf("Hib�s input\n");
            //hib�s karakterek kitolvas�sa input bufferb�l
            while ((ch=getchar()) != '\n');
                rendben = 0;
        }

     } while( !rendben || *x < 0 );

     return ;
}

void int_beolvas_kitevo(int* y)
{
    char ch;
    int rendben;

     do
    {
        rendben = 1;
        printf("Adja meg a hatvanykitevot: ");

        if(scanf("%d", y)!=1)
        {
            printf("Hib�s input\n");
            //hib�s karakterek kitolvas�sa input bufferb�l
            while ((ch=getchar()) != '\n');
                rendben = 0;
        }

     } while( !rendben || *y < 0 );

     return ;
}


int hatvany(int alap, int kitevo)
{
    int ertek = pow((int)alap,(int)kitevo);
    return ertek;
}
