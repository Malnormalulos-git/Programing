#include <stdio.h>
#include <stdlib.h>
int main()
{
int a, b, F;
    for(a=3; a<=30; a+=3)
      {
          for(b=8; b<=20; b+=4)
          {
          F=2*a*a+b;
          printf("2*%d^2 + %d = %d\n", a, b, F);
        }
    printf("\n");
   }
 system("pause");
return 0;
}
