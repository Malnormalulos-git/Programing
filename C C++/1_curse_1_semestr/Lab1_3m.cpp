#include<stdio.h>
#include <stdlib.h>
#include <cmath>
int main()
{
 float v, s, f, res;
 puts("Enter values 'v', 's' and 'f'");
 scanf("%f %f %f",&v,&s,&f);
 res=pow(s,3)/v-f*v;
 printf("res=(%f^3)/(%f*%f)=%2.4f \n",v,s,f,res);
system("pause"); 
return 0;
} 
