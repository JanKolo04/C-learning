#include <stdio.h>

main()
{
  int c, nl;

  nl = 0;
  while((c = getchar()) != EOF){
    if (c == '\n')
      ++nl;
    if (c == '9')
      break;
  }
  printf("%d\n", nl);
}
