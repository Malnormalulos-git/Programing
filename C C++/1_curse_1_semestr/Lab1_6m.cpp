#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define STR1 "Today we are"
#define STR2 "learning how to "
#define STR3 "\"Programm on C++\""
#define STR4 "Fredrik Backman \"En man som heter Ove\""
int main()
{
 printf("|%s|\n", STR1);
 printf("|%s|\n", STR2);
 printf("|%s|\n", STR3);
 printf("|%s|\n", STR4);
 printf("|%75.5s|\n", STR1); 
 printf("|%-75.8s|\n", STR2);
 printf("|%75.9s|\n", STR3);
 printf("|%-75.9s|\n", STR3);
 printf("|%75.7s|\n", STR4);
 printf("|%-75.7s|\n", STR4);
 system("pause");  
 return 0;
}

