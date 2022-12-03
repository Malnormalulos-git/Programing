#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main(){
 char s;
 puts("Enter first letter of the flower:");
 scanf("%c",&s);
 fflush(stdin);
 s = tolower(s);
 switch(s){
   case 'r': puts("This is Roze"); break;
   case 'ñ': puts("This is Chamomile"); break;
   case 't': puts("This is Tulip"); break;
   case 'm': puts("This is Marigold"); break;
   case 'p': puts("This is Peony"); break;
   default: printf("Error! The flower that begins on %c isn\'t in the base\n", s);
  }
 system("pause"); 
 return 0;
 }

