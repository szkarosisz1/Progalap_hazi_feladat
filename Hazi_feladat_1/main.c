#include <stdio.h>
#include <stdlib.h>

// Írjon programot, amely kiszámítja egy ellenõrzötten beolvasott egész szám négyzetét.
// Az egyes részfeladatokat külön függvényben valósítsa meg!

void int_beolvas(int* x);
int hatvany(int alap, int kitevo);

int main()
{
    int szam;
    int_beolvas(&szam);

    printf("%d negyzete = %d\n", szam, hatvany(szam, szam));

    return 0;
}

void int_beolvas(int* x)
{
    char ch;
    int rendben;

    do
    {
        rendben = 1;
        printf("Adjon meg egy szamot: ");
        if(scanf("%d", x) != 1)
        {
             printf("Hibas input\n");
            //hibás karakterek kiolvasása input bufferbõl
             while ((ch = getchar()) != '\n');
                rendben = 0;
        }
     } while( !rendben || *x < 0 );

     return ;
}

int hatvany(int alap, int kitevo)
{
    return alap * kitevo;
}

