#include <stdio.h>
#include <stdlib.h>

//1. Készítsen C programot, amely bekéri egy téglatest három oldalának hosszát és kiszámítja
//annak felszínét (A = 2 * (a*b + a*c + b*c)) és térfogatát (V = a*b*c). A felszín számításánál
//ügyeljen a helyes zárójelezésre!


int main()
{
    int a, b, c;
    printf("Adja meg a teglatest harom oldalanak hosszat: ");
    scanf("%d %d %d",&a,&b,&c);

    int A = 2 * (a*b + a*c + b*c);  //Felszín képlete
    int V = a*b*c;                  //Térfogat képlete

    printf("Felszin: %d ",A);
    printf("\nTerfogat: %d",V);


    return 0;
}
