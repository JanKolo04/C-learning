#include <stdio.h>

main()
{
  int lower, upper, step;
  float fahr, celsius;

  lower = 0;
  upper = 300;
  step = 20;
 
  fahr = lower;
  while(fahr <= upper){
    celsius = (5.0/9.0)*(fahr-32);
    printf("%3.0f   %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}


/*
ZMIENNE: 
int = liczba całkowita 
float = liczba zmienno przecinkowa
short = liczba calkowita krótka
long = liczba całkowita długa 
char = znak pojedynczy 
double = liczba zmienno przecinkowa podówjnej precyzji 
*/

/*
PRECYZJA PRINTF:
%d = liczba całkowita dziesietna 
%6d = liczba całkowita dziesietna conajmniej 6 znaków 
%f = liczba zmienno przecinkowa 
%6f = liczba zmienno przecinkowa co najmniej 6 znaków 
%.2f = liczba zmiennno przecinkowa 2 znaki po kropce 
%6.2f = liczba zmienno przecinkowa co najmniej 6 znaków i 2 znaki po przecinku
*/
