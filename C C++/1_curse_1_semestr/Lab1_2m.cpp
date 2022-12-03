#include<stdio.h>
#include <stdlib.h>
#include <cmath>
int main()
{int a1=3, a2=2, b1, b2, b3; 
 a2 += a1+5;      // a2=a2+a1+5=2+3+5=10
 printf("a1=%d a2=%d\n",a1,a2);
 
 b1= pow(a1,3)+3*a2;     // b1=27+3*10=57
 b2=a1<a2;    // b2=(3<10)=1
 printf("b1=%d b2=%d\n", b1,b2); 
 
 b3=b2--;    // b3=b2=1 b2=b2-1=1-1=0  
 printf("b2=%d b3=%d\n", b2,b3);
 
 float f1=1.5, f2=2.5, r1, r2; 
 r1=f1/f2*2;    // r1=1.5*2/2.5=1.2
 r2=(f1<=f2)?f1-0.2:f2+0.7;   // r2(1.5<=2.5)?1.5-0.2=1.3
 printf("r1=%5.2f r2=%5.2f\n",r1,r2);
system("pause"); 
return 0;
} 

