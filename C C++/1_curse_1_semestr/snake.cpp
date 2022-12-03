#include <stdlib.h>
#include <iostream>
#include<time.h>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
using namespace std;

#define Head 253
#define Food 64
#define Body 79

#define size_x 48
#define size_y 26

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define waitx 90
#define waity 150
#define wait0 35

struct BODY{
	unsigned char X:6;
	unsigned char Y:5;
	//unsigned char av:1;
}bod[1000], bod_old;
COORD head, apple;
short len, dir, dir1;
void ShowConsoleCursor(bool showFlag){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}
void field(){
	for(int i = 0; i < size_y; i++){
		if(i == 0)
			cout << "\t\t\t\t" << (char)201;
		else if(i == size_y-1)
			cout << "\t\t\t\t" << (char)200;
		else 
			cout << "\t\t\t\t" << (char)186;
		for(int j = 0; j < size_x; j++){
			if(i == 0 || i == size_y-1)
				cout << (char)205;
			else
				cout << " ";
		}
		if(i == 0)
			cout << (char)187 << endl;
		else if(i == size_y-1)
			cout << (char)188 << endl;
		else 
			cout << (char)186 << endl;
	}
}
void gotoxy(int x, int y){
	COORD coord;
	coord.X = (x+33);
	coord.Y = (y+1);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void food(){
	apple.X=rand()%48;
	apple.Y=rand()%24;
	gotoxy(apple.X, apple.Y);
	cout << (char)Food;
}
//void body(int a){
//	bod[0].X=head.X;
//	bod[0].Y=(head.Y-1);
//	gotoxy(bod[0].X, bod[0].Y);
//	cout << (char)Body;
//	for(int i = 0; i < len; i++){
//		bod_old=bod[i];
//		bod[i-1]=bod[i];
//		
//		gotoxy(bod[i].X, bod[i].Y);
//		cout << (char)Body;
//		if(bod[i].Y > 0){
//			gotoxy(bod_old.X, bod_old.Y);
//			cout << " ";
//		}
//	}
//}
void check_food(){
	if(head.X == apple.X && head.Y == apple.Y){
        len++;
        food();
        gotoxy(-23, 0);
        cout << (len*10);
    }
}
void move_down(){
	int i = 0;
	while(!kbhit()){
		if(i)
			Sleep(waity);
		else
			Sleep(wait0);
		head.Y++;
		check_food();
		if(head.Y > 0){
			gotoxy(head.X, (head.Y-1));
			cout << " ";
		}
		if(head.Y == (size_y-2)){
			head.Y = 0;
		}
		gotoxy(head.X, head.Y);
		cout << (char)Head;
//		body(1);
		i++;
	}
}
void move_up(){
	int i = 0;
	while(!kbhit()){
		if(i)
			Sleep(waity);
		else
			Sleep(wait0);
		head.Y--;
		check_food();
		if(head.Y < (size_y-3)){
			gotoxy(head.X, (head.Y+1));
			cout << " ";
		}
		if(head.Y < 0){
			head.Y = (size_y-3);
		}
		gotoxy(head.X, head.Y);
		cout << (char)Head;
		i++;
	}
}
void move_right(){
	int i = 0;
	while(!kbhit()){
		if(i)
			Sleep(waitx);
		else
			Sleep(wait0);
		head.X++;
		check_food();
		if(head.X > 0){
			gotoxy((head.X-1), head.Y);
			cout << " ";
		}
		if(head.X == size_x){
			head.X = 0;
		}
		gotoxy(head.X, head.Y);
		cout << (char)Head;
		i++;
	}
}
void move_left(){
	int i = 0;
	while(!kbhit()){
		if(i)
			Sleep(waitx);
		else
			Sleep(wait0);
		head.X--;
		check_food();
		if(head.X < (size_x-1)){
			gotoxy((head.X+1), head.Y);
			cout << " ";
		}
		if(head.X < 0){
			head.X = (size_x-1);
		}
		gotoxy(head.X, head.Y);
		cout << (char)Head;
		i++;
	}
}
int main(){
	ShowConsoleCursor(false);
	srand((unsigned)time(NULL));
	field();
	gotoxy(-30, 0);
	cout << "Score: " << (len*10);

	food();
	while(1)
    {
        dir=getch();
		fflush(stdin);
        switch(dir) {
        case UP:
            //cout << "\t" << dir << endl << "Up" << endl;//key up
            move_up();
            break;
        case DOWN:
            //cout << "\t" << dir << endl << "Down" << endl;   // key down
            move_down();
            break;
        case LEFT:
            //cout << "\t" << dir << endl << "Left" << endl;  // key left
            move_left();
            break;
        case RIGHT:
            //cout << "\t" << dir << endl << "Right" << endl;  // key right
            move_right();
            break;
        default:
            //cout << "\t" << dir << endl << "null" << endl;  // not arrow
            break;
        }
    }
	return 0;
}

