#include <stdio.h>

main()
{
  int c;
  long nc;

  nc = 0;
  while ((c = getchar()) != EOF){
    ++nc;
    if (c == '9')
      break;
  }
  printf("%ld\n", nc);
}


/*
in for loop 

main()
{
  double nc;
  
  for(nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}

*/
