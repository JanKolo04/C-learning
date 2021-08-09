#include <stdio.h>

main()
{
  int fahr;

  for(fahr=0; fahr <= 300; fahr = fahr+20)
    printf("%3d   %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}


/*
Inicjazlizacja:
fahr = 0;

Jest to opreacaja wykonwyana jednokotnie przed wejsciem
programu w petle 
*/

/*
Warunek sterujący:
fahr <= 300;

Ten waruenk jest za kazdym razem sprawdzany przed wejsciem w petle
*/

/*
Instrukcja:
fahr = fahr+20;

Po jej wykonanniu pprogram przechodzi jeszcze raz na sam poczatekk progrmau
czyli do sprawdzenia waruneku 
*/
