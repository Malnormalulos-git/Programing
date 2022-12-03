#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define M 3
#pragma pack(push,1)
struct CARD{char name[20]; // ????????
 unsigned char sex:1; //?????
 unsigned char family:1; // ???????? ????
 unsigned char children:3; // ????????? ?????
 unsigned char experience:3; //???? ??????
 };
CARD card[M];
int main()
{int flag,i;
for (i=0;i<M;i++)
 {puts("Enter details");
 puts("surname:"); // ????????
 gets(card[i].name);
 puts("sex: woman -0, man -1");
 scanf("%d",&flag); fflush(stdin);
 if(flag) card[i].sex=1;
 else card[i].sex=0;
 puts("married yes - 1, no - 0"); // ?????(???????)
 scanf("%d",&flag); fflush(stdin);
 if(flag) card[i].family=1;
 else card[i].family=0;
 puts("number of children:");
 scanf("%d",&flag); fflush(stdin);
 card[i].children=flag;
 puts("experience:"); // ???? ??????
 scanf("%d",&flag); fflush(stdin);
 card[i].experience=flag;
 }
puts("\n The input data:");
for(int i=0; i<M;i++)
 {printf("%d. %-15s ",i+1, card[i].name);
 if(card[i].sex==0) printf("woman ");
 else printf("man ");
 printf("children - %d\n", card[i].children);
 printf("experience - %d\n\n",card[i].experience);
 }
#pragma pack(pop)
system("pause"); return 0;}
