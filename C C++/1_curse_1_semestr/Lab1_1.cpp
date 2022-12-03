#include<stdio.h>
#include<stdlib.h>
int main()
{
 char s = 'K';
 printf("%c. Filippenkov\n\n", s);
 printf("Symbol %c = %d(10S) = %#o(8S)", s, s, s);
 printf(" = %#x(16S), size char = %d byte\n\n", s, sizeof(s)); 
  
 int a = 78;
 printf("Int a = %d, size int = %d bytes\n\n",a ,sizeof(a));
 
 short b = 4;
 printf("Short b = %d, size short = %d bytes\n\n",b ,sizeof(b));
 
 long c = 144254244;
 printf("Long c = %ld, size long = %d bytes\n\n",c ,sizeof(c));
 
 long long d = 1424242544524524;
 printf("Long long d = %lld, size long long = %d bytes\n\n",d ,sizeof(d));
 
 double e = 526.2345;
 printf("Double e = %lf, size double = %d bytes\n\n",e ,sizeof(e));
 
 float f = 526.2345;
 printf("Float f = %f = %e, size float = %d bytes\n\n", f, f, sizeof(f));
 
 system("pause"); 
 return 0;
}
