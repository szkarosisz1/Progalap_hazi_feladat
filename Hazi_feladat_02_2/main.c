#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//rjon C programot, amely beolvas egy val�s (double t�pus�) sz�mot �s visszaadja a hozz�
//legk�zelebb es� kisebb ill. nagyobb eg�sz sz�mot.
//Felhaszn�land� f�ggv�nyek: double ceil(double) ; double floor(double)



int main()
{
    double szam;
    printf("Adjon meg egy szamot: ");
    scanf("%lf",&szam);

    printf("A hozza legkozelebb eso nagyobb szam: %.0lf",ceil(szam));
    printf("\nA hozza legkozelebb eso kisebb szam: %.0lf",floor(szam));


    return 0;
}
