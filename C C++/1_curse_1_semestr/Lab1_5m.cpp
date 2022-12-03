#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 short x1 = -32000, x2, x3;
 x2 = x1 - 768;
 x3 = x2 - 1;
 cout<<"Short: "<<x1<<"  "<<x2<<"  "<<x3<<"\n";
 
 unsigned short y1 = 65530, y2, y3;
 y2 = y1 - 65530;
 y3 = y2 - 1;
 cout<<"Unsigned short: "<<y1<<"  "<<y2<<"  "<<y3<<"\n";
 
 char z1 = -108, z2, z3;
 z2 = z1 - 20;
 z3 = z2 - 1;	
  printf("Char: %d  %d  %d\n", z1, z2, z3);
  	
 unsigned char v1 = 240, v2, v3;
 v2 = v1 - 240;
 v3 = v2 - 1;
 printf("Unsigned char: %d  %d  %d\n", v1, v2, v3);
 
 system("pause");
 return 0;
}
