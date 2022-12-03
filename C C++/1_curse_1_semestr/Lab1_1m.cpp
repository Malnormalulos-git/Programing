#include<stdio.h>
#include<stdlib.h>
int main()
{
 char n ='K';
 char sn[] = "Filippenkov";
 printf("%c. %s\n\n", n, sn);
 printf("Symbol \"%c\", size char = %d byte\n\n",n ,sizeof(n));
 printf("String \"%s\", size char = %d bytes\n\n",sn ,sizeof(sn));
 
 int a = 78;
 printf("Int a = %d, size int = %d bytes\n\n",a ,sizeof(a));
 
 short b = 4;
 printf("Short b = %d, size short = %d bytes\n\n",b ,sizeof(b));
 
 long c = 144254244;
 printf("Long c = %ld, size long = %d bytes\n\n",c ,sizeof(c));
 
 long long d = 1424242544524524;
 printf("Long long d = %lld, size long long = %d bytes\n\n",d ,sizeof(d));
 
 double e = 526.2345;
 printf("Double e = %f, size double = %d bytes\n\n",e ,sizeof(e));
  
 float f = 526.2345; //визначення і ініціалазація дійсної змінної
 printf("b=%f=%e size float=%d bait\n",f,f,sizeof(f));
 
 system("pause"); 
 return 0;
}

