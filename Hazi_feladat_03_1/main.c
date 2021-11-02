#include <stdio.h>
#include <stdlib.h>

//1. Írjon C programot, amely két megadott számról eldönti, hogy melyik a nagyobb
//(szelekciós utasítás). Vizsgálja az egyenlõségüket is!
//Megoldható-e a feladat switch szerkezettel?

int main()
{
    int szam1, szam2;
    printf("Adja meg a 'szam1' szamot: ");
    scanf("%d",&szam1);

    printf("Adja meg a 'szam2' szamot: ");
    scanf("%d",&szam2);

    /*if(szam1 > szam2)
    {
        printf("A szam1 nagyobb: %d",szam1);
    }
    else if(szam1 < szam2)
    {
        printf("A szam2 nagyobb: %d",szam2);
    }
    else
    {
        printf("A szam1 es szam2 megegyezik");
    }*/

    //Megoldható-e a feladat switch szerkezettel?
    switch(szam1 > szam2)
    {
      case 1: printf("A szam1 nagyobb");
        break;

      case 0:
      switch(szam1 < szam2)
      {
        case 1: printf("A szam2 nagyobb");
            break;
      }

      switch(szam1 == szam2)
      {
        case 1: printf("szam1 es szam2 megegyezik");
            break;
      }
        break;
    }


    return 0;
}
