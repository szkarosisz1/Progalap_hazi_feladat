#include <stdio.h>
#include <stdlib.h>

//1. K�sz�tsen C programot, amely bek�ri egy t�glatest h�rom oldal�nak hossz�t �s kisz�m�tja
//annak felsz�n�t (A = 2 * (a*b + a*c + b*c)) �s t�rfogat�t (V = a*b*c). A felsz�n sz�m�t�s�n�l
//�gyeljen a helyes z�r�jelez�sre!


int main()
{
    int a, b, c;
    printf("Adja meg a teglatest harom oldalanak hosszat: ");
    scanf("%d %d %d",&a,&b,&c);

    int A = 2 * (a*b + a*c + b*c);  //Felsz�n k�plete
    int V = a*b*c;                  //T�rfogat k�plete

    printf("Felszin: %d ",A);
    printf("\nTerfogat: %d",V);


    return 0;
}
