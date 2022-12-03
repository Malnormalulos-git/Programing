#include <iostream>
#include <stdlib.h>
using namespace std;
#pragma pack(push,1)
struct STB{
//unsigned char b1:2; 
unsigned char b2:3; 
unsigned char b3:5; 
unsigned char b4:6; 
unsigned char b1:2;
}; 
union UN2{
short Lg; 
STB bit;} un3;

int main()
{
    cout << sizeof(un3) << " " << sizeof(UN2) << " " << sizeof(STB) << endl;

    return 0;
}
