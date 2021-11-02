#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//rjon C programot, amely beolvas egy valós (double típusú) számot és visszaadja a hozzá
//legközelebb esõ kisebb ill. nagyobb egész számot.
//Felhasználandó függvények: double ceil(double) ; double floor(double)



int main()
{
    double szam;
    printf("Adjon meg egy szamot: ");
    scanf("%lf",&szam);

    printf("A hozza legkozelebb eso nagyobb szam: %.0lf",ceil(szam));
    printf("\nA hozza legkozelebb eso kisebb szam: %.0lf",floor(szam));


    return 0;
}
