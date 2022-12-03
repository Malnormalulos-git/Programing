#include<stdio.h>
#include <stdlib.h>
#include <iostream>
int main()
{
 int n;
 puts("Input  number:");
 scanf("%d",&n);
 if(n%10==0) printf("number %d ends 0\n", n);
 else printf("number %d dosen\'t end 0\n\n", n);
 system("pause");
 return 0;
}
