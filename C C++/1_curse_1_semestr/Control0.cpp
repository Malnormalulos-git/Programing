#include <stdio.h>
int main(){
int x=3,n=0;
 for(int i=3; i>2&&i<6;i+=2){
    n++; x+=2; 
    printf("i=%d x=%d\n",i,x);
   }
 printf("n=%d",n); 
}
