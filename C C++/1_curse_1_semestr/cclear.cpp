//#include <conio.h>
//int main(void)
//{
//register int i;
//gotoxy (10, 10);
//cprintf ("This is a test of the clreol() function.");
//getch ();
//gotoxy(10, 10);
//clreol ();
//for(i=0; i<20; i++) cprintf("Hello there\n\r");
//getch ();
//
///* ??????? ?????? */
//clrscr();
//return 0;
//}
#include <conio.h>
#include <cstdlib>
int main()
{
register int i, j;
system("cls");

/* ????? ????????? ?? ?-?? */
for(i = 1, j = 1; j < 24; i+=3, j++) {

cprintf("X");
}
getche ();
system("cls");
return 0;
}
